import os
import subprocess
import csv
import time
import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed
from tqdm import tqdm

def solve_with_cbmc(c_files, cbmc_unwind, timeout_seconds, output_csv):
    results = []
    start_time = time.time()
    elapsed_time = -1
    solve_result = 'UNKNOWN'

    try:
        with subprocess.Popen(
            ['cbmc'] + c_files + ['--unwind', str(cbmc_unwind), '--no-built-in-assertions'],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True
        ) as process:
            process.wait(timeout=timeout_seconds)
            end_time = time.time()
            elapsed_time = end_time - start_time

            if process.returncode == 0:
                solve_result = 'SUCCESSFUL'
            elif process.returncode == 10:
                solve_result = 'FAILED'
            elif process.returncode == -9:
                solve_result = 'TIMEOUT'
                print(f'Files: {", ".join(c_files)} - TIMEOUT after {timeout_seconds} seconds')
    except Exception as e:
        solve_result = f'ERROR: {str(e)}'
        print(f'Files: {", ".join(c_files)} - ERROR: {str(e)}')

    for file_path in c_files:
        file_name = os.path.basename(file_path)
        results.append({
            'Filename': file_name,
            'Elapsed Time': elapsed_time,
            'Result': solve_result
        })

    # 立即写入结果到 CSV 文件
    with open(output_csv, 'a', newline='') as csvfile:
        fieldnames = ['Filename', 'Elapsed Time', 'Result']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        for result in results:
            writer.writerow(result)

def main():
    parser = argparse.ArgumentParser(description='CBMC verification script')
    parser.add_argument('--dir', required=True, help='Directory containing .c files')
    parser.add_argument('--output', required=True, help='Output CSV file name')
    parser.add_argument('--unwind', type=int, required=True, help='CBMC unwind value')
    parser.add_argument('--timeout', type=int, default=600, help='Timeout in seconds (default: 600)')
    args = parser.parse_args()

    main_dir = args.dir
    output_csv = args.output
    cbmc_unwind = args.unwind
    timeout_seconds = args.timeout

    # 获取给定目录中的所有 .c 文件
    c_files = [os.path.join(main_dir, file) for file in os.listdir(main_dir) if file.endswith('.c')]

    if not c_files:
        print(f"No .c files found in directory {main_dir}")
        return

    # 初始化输出 CSV 文件
    with open(output_csv, 'w', newline='') as csvfile:
        fieldnames = ['Filename', 'Elapsed Time', 'Result']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()

    with ThreadPoolExecutor(max_workers=4) as executor:  # 设置并行度
        futures = [executor.submit(solve_with_cbmc, [c_file], cbmc_unwind, timeout_seconds, output_csv) for c_file in c_files]

        with tqdm(total=len(futures), desc="Processing") as pbar:
            for future in as_completed(futures):
                future.result()  # 等待每个 future 完成
                pbar.update(1)

    print(f'Verification results have been saved to {output_csv}')

if __name__ == '__main__':
    main()

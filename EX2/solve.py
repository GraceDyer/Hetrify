import os
import subprocess
import csv
import time
import argparse
from concurrent.futures import ThreadPoolExecutor, as_completed
from tqdm import tqdm

def solve_with_cbmc(directory, cbmc_unwind, timeout_seconds, output_csv):
    folder_name = os.path.basename(directory)
    start_time = time.time()
    elapsed_time = -1
    solve_result = 'UNKNOWN'

    try:
        c_files = [os.path.join(directory, file) for file in os.listdir(directory) if file.endswith('.c')]
        with subprocess.Popen(
            ['cbmc'] + c_files + ['--unwind', str(cbmc_unwind), '--no-built-in-assertions','--object-bits','16'],
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
                print(f'Folder: {folder_name} - TIMEOUT after {timeout_seconds} seconds')
    except Exception as e:
        solve_result = f'ERROR: {str(e)}'
        print(f'Folder: {folder_name} - ERROR: {str(e)}')

    result = {
        'Folder': folder_name,
        'Elapsed Time': elapsed_time,
        'Result': solve_result
    }

    # 以追加模式写入CSV文件
    with open(output_csv, 'a', newline='') as csvfile:
        fieldnames = ['Folder', 'Elapsed Time', 'Result']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writerow(result)

def main():
    parser = argparse.ArgumentParser(description='CBMC verification script')
    parser.add_argument('--dir', required=True, help='Directory containing subdirectories with .c files')
    parser.add_argument('--output', required=True, help='Output CSV file name')
    parser.add_argument('--unwind', type=int, required=True, help='CBMC unwind value')
    parser.add_argument('--timeout', type=int, default=600, help='Timeout in seconds (default: 600)')
    args = parser.parse_args()

    main_dir = args.dir
    output_csv = args.output
    cbmc_unwind = args.unwind
    timeout_seconds = args.timeout

    # 获取给定目录中的所有子目录
    subdirectories = [os.path.join(main_dir, d) for d in os.listdir(main_dir) if os.path.isdir(os.path.join(main_dir, d))]

    # 写入CSV文件的头部
    with open(output_csv, 'w', newline='') as csvfile:
        fieldnames = ['Folder', 'Elapsed Time', 'Result']
        writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
        writer.writeheader()

    with ThreadPoolExecutor(max_workers=12) as executor:
        futures = []
        for subdirectory in subdirectories:
            futures.append(executor.submit(solve_with_cbmc, subdirectory, cbmc_unwind, timeout_seconds, output_csv))
        
        with tqdm(total=len(futures), desc="Processing") as pbar:
            for future in as_completed(futures):
                pbar.update(1)

    print(f'Verification results have been saved to {output_csv}')

if __name__ == '__main__':
    main()


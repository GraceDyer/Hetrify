import os
import subprocess
import csv
import time
from tqdm import tqdm

# Create or clear the result.csv file
output_file = "result.csv"
with open(output_file, mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["Filename", "Verification Result", "Verification Time"])

# Get all .rs files in the current directory
rs_files = [f for f in os.listdir('.') if f.endswith('.c')]

# Iterate over all .rs files with a progress bar
for filename in tqdm(rs_files, desc="Verifying .rs files"):
    print(f"Currently verifying: {filename}")

    # Record the start time
    start_time = time.time()

    try:
        # Run the verification tool with a timeout of 300 seconds
        result = subprocess.run(["cbmc", filename, "--unwind 20 >", filename, "_result.txt"], capture_output=True, text=True, timeout=300)

        # Record the end time
        end_time = time.time()

        # Calculate the elapsed time
        elapsed_time = end_time - start_time

        # Determine the verification result
        if "VERIFICATION SUCCESS" in result.stdout:
            verification_result = "SUCCESS"
        elif "VERIFICATION FAILED" in result.stdout:
            verification_result = "FAILED"
        else:
            verification_result = "UNKNOWN"
    except subprocess.TimeoutExpired:
        # Handle timeout
        verification_result = "TIMEOUT"
        elapsed_time = 300.0

    # Write the results to the CSV file immediately after verification
    with open(output_file, mode='a', newline='') as file:
        writer = csv.writer(file)
        writer.writerow([filename, verification_result, f"{elapsed_time:.2f} seconds"])

print(f"Verification results have been saved to {output_file}")

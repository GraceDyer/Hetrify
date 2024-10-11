import os
import subprocess
import csv
import time
from tqdm import tqdm
import sys

# Check if the user provided a directory as an argument
if len(sys.argv) != 2:
    print("Usage: python verify.py <directory>")
    sys.exit(1)

# Get the directory from the command line arguments
directory = sys.argv[1]

# Check if the provided directory exists
if not os.path.isdir(directory):
    print(f"Error: The directory '{directory}' does not exist.")
    sys.exit(1)

# Create or clear the result.csv file
output_file = "result.csv"
with open(output_file, mode='w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(["Filename", "Verification Result", "Verification Time"])

# Get all .c files in the specified directory
c_files = [f for f in os.listdir(directory) if f.endswith('.rs')]

# Iterate over all .c files with a progress bar
for filename in tqdm(c_files, desc="Verifying .c files"):
    print(f"Currently verifying: {filename}")

    # Record the start time
    start_time = time.time()

    try:
        # Run the verification tool with a timeout of 300 seconds
        file_path = os.path.join(directory, filename)
        result = subprocess.run(["./Hetrify", file_path, "--cbmc"], capture_output=True, text=True, timeout=300)

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
import subprocess

while(1):
    print("Choose 1, 2, 3")
    # Run the C++ program as a subprocess
    process = subprocess.Popen("./a.out", stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    #stdout, stderr = process.communicate()

    input_data = input("value: ")
    process.stdin.write(input_data.encode())
    process.stdin.flush()
    
    stdout, stderr = process.communicate()
    
    # Check for errors (optional)
    if process.returncode != 0:
        print(f"Error: {stderr.decode()}")
        exit(1)

    string_from_cpp = stdout.decode().strip()

    if (string_from_cpp == "You chose 2"):
        print("test")

    # Now you can use 'integer_from_cpp' in your Python code
    print("Received string from C++:", string_from_cpp)

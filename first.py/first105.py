# file i/o 



# File I/O Example in Python

# Writing to a file
with open('example.txt', 'w') as file:
    file.write("Hello, World!\n")
    file.write("This is a file I/O example in Python.\n")

# Reading from a file
print("Reading from example.txt:")
with open('example.txt', 'r') as file:
    content = file.read()
    print(content)

# Reading a file line by line
print("Reading example.txt line by line:")
with open('example.txt', 'r') as file:
    for line in file:
        print(line.strip())  # Use strip() to remove newline characters

# Appending to a file
with open('example.txt', 'a') as file:
    file.write("Appending a new line to the file.\n")

# Reading the updated file
print("Reading updated example.txt:")
with open('example.txt', 'r') as file:
    content = file.read()
    print(content)

# Writing binary data
with open('example.bin', 'wb') as file:
    file.write(b'\x00\x01\x02\x03\x04')

# Reading binary data
print("Reading from example.bin:")
with open('example.bin', 'rb') as file:
    binary_content = file.read()
    print(binary_content)
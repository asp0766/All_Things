#  local and global variable



global_var = "I am a global variable"

def my_function():
    local_var = "I am a local variable"
    print(local_var)
    print(global_var)

my_function()

print(global_var)

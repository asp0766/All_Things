#FUNCTION
# WAF to print all elements of a list in single line


cities = ["delhi", "noida", "pune", "mumbai", "chennai"]

def print_items(items):
    for item in items:
        print(item, end=" ")


print_items(cities)

# exception handling 


# multiple error handling :::
while True:
    try:
        num = int(input("Enter an integer (0 for 6, 1 for 3): "))  # Clarified index options
        a = [6, 3]
        print(f"The value at index {num} is: {a[num]}")
        break  # Exit the loop if successful
    except ValueError:
        print("Error: The input is not a valid integer. Please try again.")
    except IndexError:
        print("Error: Index out of range. Please enter 0 or 1.")
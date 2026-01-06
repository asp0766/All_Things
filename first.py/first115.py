#  Static Methods


class MathOperations:
    @staticmethod
    def add(x, y):
        return x + y

    @staticmethod
    def multiply(x, y):
        return x * y

# Using static methods
result_add = MathOperations.add(5, 3)
result_multiply = MathOperations.multiply(5, 3)

print(f"Addition: {result_add}")     
print(f"Multiplication: {result_multiply}")  



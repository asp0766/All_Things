# mathematical operations nad statisticial oprations basic arthimetiv operations satistical functions : mean , median , standard deviation , etc. linear algebra with numpy


import numpy as np

# Basic Arithmetic Operations
a = np.array([10, 20, 30])
b = np.array([1, 2, 3])

print(a + b)  # [11 22 33]
print(a - b)  # [ 9 18 27]
print(a * b)  # [10 40 90]
print(a / b)  # [10. 10. 10.]

# Statistical Functions
arr = np.array([1, 2, 3, 4, 5])

print(np.mean(arr))  # Mean: 3.0
print(np.median(arr))  # Median: 3.0
print(np.std(arr))  # Standard Deviation: ~1.41
print(np.var(arr))  # Variance: 2.0
print(np.min(arr))  # Min: 1
print(np.max(arr))  # Max: 5

# Linear Algebra
A = np.array([[1, 2], [3, 4]])
B = np.array([[5, 6], [7, 8]])

print(np.dot(A, B))  # Matrix Multiplication
print(np.linalg.det(A))  # Determinant of A
print(np.linalg.inv(A))  # Inverse of A
print(np.linalg.eig(A))  # Eigenvalues and Eigenvectors of A

# Class Chapter 3 : -  NumPY lIBRARY 


# Understanding arrays. creating , indexing and  manipulating arrays.  array operations and broadcasting. Mathematical and Statistical Operations : basic arithmetic operations . Statistical function :  mean ,  median ,  standard deviation , etc .  Linear algebra with numpy   : - 



# Creating Arrays : - 
# import numpy as np

# arr = np.array([1, 2, 3, 4])  # 1D Array
# mat = np.array([[1, 2], [3, 4]])  # 2D Array

# Special Arrays : -
# zeros = np.zeros((2, 2))  # 2x2 Zero Matrix  
# ones = np.ones((3, 3))  # 3x3 Ones  
# random_arr = np.random.rand(2, 2)  # Random 2x2 Matrix  




# Indexing & Manipulating Arrays : - 
# Indexing and slicing : - 
# print(arr[0])  # First element  
# print(mat[1, 0])  # Row 1, Column 0  
# print(arr[1:3])  # Slice from index 1 to 2  

# Reshaping and Transposing : - 
# reshaped = arr.reshape(2, 2)  # Convert 1D to 2D  
# transposed = mat.T  # Transpose a matrix  




# Array Operations : -
#  Element-wise Operations : - 
# a = np.array([1, 2, 3])
# b = np.array([4, 5, 6])

# print(a + b)  # [5 7 9]
# print(a * b)  # [4 10 18]
# print(a ** 2)  # [1 4 9]


# BroadCasting : -
# mat = np.array([[1, 2], [3, 4]])
# print(mat + 5)  # Adds 5 to all elements




# Mathematical & Statistical Operations : -
# Basic Arithmetic Operations : -
# print(np.sum(arr))  # Sum of elements  
# print(np.prod(arr))  # Product of elements  
# print(np.sqrt(arr))  # Square root  



# Statistical Functions : -
# print(np.mean(arr))  # Mean  
# print(np.median(arr))  # Median  
# print(np.std(arr))  # Standard deviation  



#Linear Algebra with NumPy :  -
# Matrix Multiplication : - 
# A = np.array([[1, 2], [3, 4]])
# B = np.array([[5, 6], [7, 8]])
# C = np.dot(A, B)  # Matrix multiplication
# print(C)


#  Determinant & Inverse :  -
# det = np.linalg.det(A)  # Determinant  
# inv = np.linalg.inv(A)  # Inverse  












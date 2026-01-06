# Array Indexing and accessing : - 


import numpy as np

# 2D Array ::: - 
arr_2d = np.array([[10, 20, 30], [40, 50, 60], [70, 80, 90]])

# Accessing elements
print(arr_2d[1, 2])  # 60
print(arr_2d[-1, -1])  # 90

# Slicing
print(arr_2d[1, :])  # [40 50 60]
print(arr_2d[:, 1])  # [20 50 80]
print(arr_2d[0:2, 1:])  # [[20 30] [50 60]]




# 3D Array  ::: - 
arr_3d = np.array([[[1, 2, 3], [4, 5, 6]], [[7, 8, 9], [10, 11, 12]]])

# Accessing elements
print(arr_3d[1, 0, 2])  # 9
print(arr_3d[0, 1, :])  # [4 5 6]

# Slicing
print(arr_3d[:, 1, 1])  # [5 11]
print(arr_3d[0, :, 1:])  # [[2 3] [5 6]]

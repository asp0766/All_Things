# Create 3-D Array with 2-D Array : - 


import numpy as np

arr_2d = np.array([[1, 2, 3], [4, 5, 6]])
arr_3d = np.array([arr_2d, arr_2d]) 

print(arr_3d)

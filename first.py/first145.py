# NumPy Axis : - 
import numpy as np
x = [[1,2,3],[4,5,6],[7,8,9]]
ar = np.array(x)
print(x)
print(np.sum(x))
print(np.sum(x, axis=0))  # column wise sum
print(np.sum(x, axis=1))  # row wise sum
print(ar.flat) # returns a 1-D array containing all the elements of the array
print(ar.T)   # transpose of the array
print(ar.flatten())  # convert the array into 1D array
print(ar.ravel())  # convert the array into 1D array
print(ar.ndim)  # output :  2
print(ar.size)  # output :  9
print(ar.nbytes)  # output :  36
print(ar.itemsize)  # output :  4
print(ar.shape)  # output :  (3, 3)
print(ar.dtype)  # output :  int32
print(ar.data)  # output :  <memory at 0x0000020E3E2A8A00>
print(ar.strides)  # output :  (12, 4)
print(ar.flags)  # output :    C_CONTIGUOUS : True

   

   

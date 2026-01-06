# Array Creation : Conversion from other Python structures (e.g., lists, tuples)
import numpy as np
listarray = np.array([[1,2,3],[4,5,6],[7,8,9]])
print(listarray)
print(listarray.shape)
print(listarray.dtype)
print(listarray.size)


np.array({34,23,23})  # set
print(np.array)       #<built-in function array>
np.array({34,23,23}).shape  # () empty tuple


zeros = np.zeros((2,5))
print(zeros)
print(zeros.dtype)  # Output: [0. 0. 0. 0. 0.]




rng = np.arange(15)
print(rng) #print the numbers from 0 to 14



lsapce = np.linspace(1,5,12)  # 12 numbers from 1 to 5
print(lsapce)


emp = np.empty((4,6))
print(emp)   # give random values 

emp_like = np.empty_like(lsapce)
print(emp_like)  # give random values 



ide = np.identity(45)
print(ide)  # identity matrix of 45*45
print(ide.shape)
print(ide.dtype)


arr = np.arange(99)
print(arr)
print(arr.reshape(3,33))  # reshape the array in 3*33(99)  matrix
print(arr.ravel())  # convert the array into 1D array
print(arr.shape) # output -  (99,)






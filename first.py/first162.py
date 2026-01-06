# Create Array in NumPy 


import numpy as np
x = np.array([1,2,3,4,5])
print(x)          # Output: [1 2 3 4 5]
print(type(x))    # Output: <class 'numpy.ndarray'>


# Dimensions in arrays : - A dimensions in a array is  one level of array depth( nested array )

# 0-D Arrays - scalars , are the elements in an array , each value in an Array is a 0-D Array 
# Now we will create 0-D Array with value 42 

y = np.array(42)
print(y) # Output: 42
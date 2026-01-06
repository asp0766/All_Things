# Python Pandas Form CodeWithHarry One Shot Video ,  Duration = 1:05:24

# https://youtu.be/RhEjmHeDNoA?si=aT95xbUMa7xiVZSd 

import numpy as np 
import pandas as pd

dict1 = {
    "name" : ['harry' , 'rohan', 'aman', 'kartik'],
    "marks" : [54 , 56 , 23 ,67 ],
    "city": ['jaipur','rajpur','noida','kolkata'] ,
}

df = pd.DataFrame(dict1)
print(df)#   this command print to value name ,marks and city row and column wise

print(df.to_csv('first142.csv')) # this command make a csv file name a.csv in same directory

print(df.to_csv('first142.csv' , index = False )) # this command remove the indexing from csv file

print(df.head(2))  # this is only show starting 2 lines of our data

print(df.tail(2))   # this is 2 lines of our data of last / bottom

print(df.describe())   # this is describe count  , mean  , std , min , 25% , 50% , 75% , 100% , max

asp  = pd.read_csv('first142.csv')
print(asp)  # this is help to read and print csv file 

print(asp['city'])  # this is only print to the name of the cities

print(asp['city'][0]) # print the first city name

asp['marks'][0]= 60 
print(asp)  # this is change the value of our data 

asp.to_csv('first142.csv') # this is make a new edited csv file in our system

asp.index = [' first', 'second' , 'third' , 'fourth'] # this will change the name of indexing of oue data and also we can change the indexing name according to oueselves 
print(asp)


# what is pandas ? 
# pandas is an opwn source data analysis library written in python
# it leverages the power and the speed of numpy to make data analysis and preprocessing easy for data scientists
# it provides rich and highly robust data operations 

# PANDAS DATA STRUCTURE : - 
#  pandas has two types of data structure : 
# a). Series - it's a one dimensional array with indexes , it stores a single column or row of data in a DataFrame 
# b). Dataframe - it's a tabular spreadsheet like structure representing rows each of which contains one or multiple columns
# a one-dimensional array(labeled) capable of holding any type of data-series 
# a two-dimensional data(labeled) structure with columns of potentially different types of data - DataFrame

# Jupyter NoteBook : - 
# The Jupyter notebook is a an open-source web application that allows you to create and share documents that contain live code , equations , visualizations and narrative text
# the notebook has support for over 40 programming languages , including Python , R , Julia , and Scala 
# notebooks can be shared with others using emails , Dropbox , Gitahub and the jupyter notebook viewer 
# your code can produce rich , interactive output : HTML  , images , videos , LaTeX and custom MIME types


ser =  pd.Series(np.random.rand(34))
print(ser) # print the series data
print(type(ser)) # print the type of series data

newdf = pd.DataFrame(np.random.rand(334,5) , index = np.arange(334)) # make a new DataFrame and print it and Arrangee is an in-built function in numpy like range function in python
print(newdf) # print the data till 334 
print(newdf.head())  # print some  first data of our new dataframe
print(type(newdf))  # print type of newdf means new DataFrame
print(newdf.describe())  # describe the new data as previous 


newdf[0][0] = 12 # here we add 12 in our data at first position of first column
newdf[0][1] = "asp"  # here we add a string in our data 
print(newdf)   
print(newdf.index) # print the index of our data
print(newdf.columns) # print the column of our data

print(newdf.to_numpy()) # convert the data into numpy array

print(newdf.sort_index(axis = 0 , ascending = False ) ) # sort the data in descending order

newdf.columns = list("ABCDE")
print(newdf) # print the data after changing the column name

print(newdf.iloc[0,4])  # print specific value
print(newdf.iloc[0,2] ,[1 , 2])

#  print(newdf.drop[0])  remove the the and columns of our data

newdf['B'] = None 
print(newdf)   # by this i did none all the value that is availble in column B 







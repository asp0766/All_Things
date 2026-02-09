# Class Chapter 2 : - All Operation in  Pandas According to Our Syllabus 
# Pandas is a Python library for data manipulation and analysis. It provides two key structures:
# Series – 1D labeled array.
# DataFrame – 2D table-like structure.
# Key Features:
# ✔ Data cleaning & transformation
# ✔ Handling missing values
# ✔ Filtering & aggregation
# ✔ Import/export (CSV, Excel, SQL, etc.)

import pandas as pd

# Understanding and creating Series and DataFrames : -
# s = pd.Series([10, 20, 30, 40]) 
# print(s)
# s = pd.Series([10, 20, 30], index=['a', 'b', 'c'])
# print(s)

# Creating A DataFrame : - 
# data = {'Name': ['Alice', 'Bob'], 'Age': [25, 30]}
# df = pd.DataFrame(data)
# print(df)



# DataFrames Operation : - indexing , selection , and filtering , Handling missing data 

# Indexing & Selection : -
# import pandas as pd

# df = pd.DataFrame({'Name': ['Alice', 'Bob'], 'Age': [25, 30]})
# print(df['Name'])  # Select a column
# print(df.loc[0])  # Select by label index
# print(df.iloc[1])  # Select by position index
# print(df[['Name', 'Age']])  # Select multiple columns


# Filtering : - 
# print(df[df['Age'] > 25])  # Filter rows where Age > 25
# print(df[(df['Age'] > 20) & (df['Name'] == 'Alice')])


# Handling Missing Data :  -
# df = pd.DataFrame({'Name': ['Alice', None], 'Age': [25, None]})
# print(df.isnull())  # Check for missing values
# df.dropna(inplace=True)
# df.fillna('Unknown', inplace=True)





# Data manipulation with pandas : - merging , joining and concatenating DataFrames , Grouping and aggregating data , Pivot Tables and cross-tabulations

# Concatenation : -
# df1 = pd.DataFrame({'A': [1, 2], 'B': [3, 4]})
# df2 = pd.DataFrame({'A': [5, 6], 'B': [7, 8]})
# df_concat = pd.concat([df1, df2])  # Stack vertically
# print(df_concat)

# Merging  : -
# df1 = pd.DataFrame({'ID': [1, 2], 'Name': ['Alice', 'Bob']})
# df2 = pd.DataFrame({'ID': [1, 2], 'Score': [85, 90]})
# df_merged = pd.merge(df1, df2, on='ID')  # Inner join by default
# print(df_merged)


# Joining : - 
# df1.set_index('ID', inplace=True)
# df2.set_index('ID', inplace=True)
# df_joined = df1.join(df2)
# print(df_joined)





#  Group By & Aggregate Function : -
# df = pd.DataFrame({'Category': ['A', 'B', 'A', 'B'], 'Sales': [100, 200, 150, 250]})
# grouped = df.groupby('Category').sum()
# print(grouped)

# grouped = df.groupby('Category').agg({'Sales': ['sum', 'mean']})
# print(grouped)




# Pivot Table : -
# df = pd.DataFrame({'Month': ['Jan', 'Jan', 'Feb', 'Feb'],
#                    'Product': ['A', 'B', 'A', 'B'],
#                    'Sales': [100, 200, 150, 250]})

# pivot = df.pivot_table(values='Sales', index='Month', columns='Product', aggfunc='sum')
# print(pivot)




# Cross Tabulation : -
# df = pd.DataFrame({'Gender': ['M', 'F', 'M', 'F'],
#                    'Product': ['A', 'A', 'B', 'B']})

# crosstab = pd.crosstab(df['Gender'], df['Product'])
# print(crosstab)








 










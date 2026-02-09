# Exercise :  Clear the Clutter : -
# write a program to clear the clutter inside a folder on your computer . you should use os module to rename all the png images form 1.png to all the way till n.png where n is the number of png files in that folder . do the same for other file formats .


import os

def clear_clutter(folder_path):
    # Change the working directory to the specified folder
    os.chdir(folder_path)
    
    # Get a list of all files in the directory
    files = os.listdir(folder_path)
    
    # Initialize counters for different file types
    png_count = 1
    jpg_count = 1
    jpeg_count = 1
    gif_count = 1
    
    # Loop through the files and rename them based on their extensions
    for file in files:
        # Check for PNG files
        if file.lower().endswith('.png'):
            new_name = f"{png_count}.png"
            os.rename(file, new_name)
            print(f"Renamed '{file}' to '{new_name}'")
            png_count += 1
        
        # Check for JPG files
        elif file.lower().endswith('.jpg'):
            new_name = f"{jpg_count}.jpg"
            os.rename(file, new_name)
            print(f"Renamed '{file}' to '{new_name}'")
            jpg_count += 1
        
        # Check for JPEG files
        elif file.lower().endswith('.jpeg'):
            new_name = f"{jpeg_count}.jpeg"
            os.rename(file, new_name)
            print(f"Renamed '{file}' to '{new_name}'")
            jpeg_count += 1
        
        # Check for GIF files
        elif file.lower().endswith('.gif'):
            new_name = f"{gif_count}.gif"
            os.rename(file, new_name)
            print(f"Renamed '{file}' to '{new_name}'")
            gif_count += 1

# Example usage
folder_path = 'path/to/your/folder'  # Replace with your folder path
clear_clutter(folder_path)
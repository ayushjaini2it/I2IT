"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
import os

print("Current working directory:", os.getcwd(),"\n")

print("Contents of current directory:", os.listdir(),"\n")

print("Changing directory to parent...")
print(os.chdir(".."))

print("Current working directory:", os.getcwd(),"\n")
print("Contents of current directory:", os.listdir(),"\n")

print("Does 'os_module.py' exist?", os.path.exists("os_module.py"), "\n")

print("Creating new folder...")
print(os.mkdir("new_folder"), "\n")

print("Creating subfolder...")
print(os.makedirs("new_folder/sub_folder"), "\n")

print("Renaming folder...", "\n")
os.rename("new_folder/sub_folder", "new_folder/renamed_folder")

print("Walking through directory tree:")
for item in os.walk("."):
    print(item)

print("Contents of current directory:", os.listdir(), "\n")

print("Removing renamed folder...")
print(os.rmdir("new_folder/renamed_folder"))

print("Contents of current directory:", os.listdir(), "\n")
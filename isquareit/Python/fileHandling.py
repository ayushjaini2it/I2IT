# write mode
f = open("ayush.txt", "w")
f.write("This is a file handling example in Python.")
f.close()
# read mode
f = open("ayush.txt", "r")
data = f.read()
print("Data in read mode:\n", data)
f.close()

# read and write mode
f = open("ayush.txt", "r+")
data = f.read()
print("Data in read and write mode:\n", data)
f.write("\nThis line is added in read and write mode.")
f.close()

# write and read mode
f = open("ayush.txt", "w+")
f.write("This is a new line in write and read mode.")
f.seek(0)
data = f.read()
print("Data in write and read mode:\n", data)
f.close()

# append mode
f = open("ayush.txt", "a")
f.write("\nThis line is added in append mode.")
f.close()
f = open("ayush.txt", "r")
data = f.read()
print("Data in append mode:\n", data)
f.close()

# append and read mode
f = open("ayush.txt", "a+")
f.write("\nThis line is added in append and read mode.")
f.seek(0)
data = f.read()
print("Data in append and read mode:\n", data)
f.close()

# x mode
f = open("ayush1.txt", "x")
f.write("This is a new file created in x mode.")
f.close()

# x and read mode
f = open("ayush2.txt", "x+")
f.write("This is a new file created in x and read mode.")
f.seek(0)
data = f.read()
print("Data in x and read mode:\n", data)
f.close()
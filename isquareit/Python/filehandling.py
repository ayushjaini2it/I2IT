"""
Name: Mangesh Mahajan
Roll No. : FIB48
Class : IT-B
"""

print("Name: Mangesh Mahajan\nRoll No. : FIB48\nClass : IT-B")
file = open("Mangesh Mahajan.txt", 'w')
file.write("Name: Mangesh Mahajan\nRoll No.: FIB48\nClass: IT-B")
file.close()
file = open("Mangesh Mahajan.txt", 'r')
# print(file.read())
# print(file.readlines())
print(file.readline())
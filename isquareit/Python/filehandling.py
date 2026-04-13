"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""

print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
file = open("Mangesh Mahajan.txt", 'w')
file.write("Name: Ayush Jain")
file.close()
file = open("Mangesh Mahajan.txt", 'r')
# print(file.read())
# print(file.readlines())
print(file.readline())

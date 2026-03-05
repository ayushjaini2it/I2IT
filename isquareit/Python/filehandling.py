"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
file = open("Ayush.txt", 'w')
file.write("Name: Ayush Jain\nRoll No.: FCB44\nClass: COMP-B")
file.close
file = open("Ayush.txt", 'r')
# print(file.read())
# print(file.readlines())
print(file.readline())
"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
a = int(input("Enter First Number"))
b = int(input("Enter Second Number"))
if a% 2 != 0 :
    a = a + 1
for i in range( a, b+1, 2): 
    print(i)

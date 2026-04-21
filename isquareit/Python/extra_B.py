"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")

with open("ayush.txt", 'w+') as f:
    f.write("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
    print("Current position:", f.tell())
    f.seek(0)
    print("After seeking seek(0), position:", f.tell())

    f.seek(5)
    print("After seeking seek(5), position:", f.tell())
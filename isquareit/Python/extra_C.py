"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")

with open("original.jpg", "rb") as f:
    data = f.read()
with open("copy.jpg", "wb") as f:
    f.write(data)
    print("Image copied successfully!")
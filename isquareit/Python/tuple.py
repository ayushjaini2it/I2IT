"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
def unpack_details(details):
    name,  roll_no, city, email = details
    return name, roll_no, city, email
data  = ("Ayush", 19, "Pune", "ayush@example.com")
name, roll_no, city, email = unpack_details(data)
print("Name:", name)
print("Roll No.:", roll_no)
print("City:", city)
print("Email:", email)


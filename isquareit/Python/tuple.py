"""
Name: SANSKAR PATIL
Roll No. : FIB51
Class : IT-B
"""
print("Name: SANSKAR PATIL\nRoll No. : FIB51\nClass : IT-B")
def unpack_details(details):
    name,  roll_no, city, email = details
    return name, roll_no, city, email
data  = ("Ayush", 19, "Pune", "ayush@example.com")
name, roll_no, city, email = unpack_details(data)
print("Name:", name)
print("Roll No.:", roll_no)
print("City:", city)
print("Email:", email)


"""
Name: Mangesh Mahajan
Roll No. : FIB48
Class : IT-B
"""
print("Name: Mangesh Mahajan\nRoll No. : FIB48\nClass : IT-B")
def unpack_details(details):
    name,  roll_no, city, email = details
    return name, roll_no, city, email
data  = ("Ayush", 19, "Pune", "ayush@example.com")
name, roll_no, city, email = unpack_details(data)
print("Name:", name)
print("Roll No.:", roll_no)
print("City:", city)
print("Email:", email)


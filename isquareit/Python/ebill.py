"""
Name: Mangesh Mahajan
Roll No. : FIB48
Class : IT-B
"""
print("Name: Mangesh Mahajan\nRoll No. : FIB48\nClass : IT-B")
units = float(input("Enter the number of units consumed: "))

if units <= 100:
    bill = units * 5
elif units <= 200:
    bill = units * 7
else:
    bill = (100 * 5) + (100 * 7) + ((units - 200)* 10)
print("Your bill is:" , bill)



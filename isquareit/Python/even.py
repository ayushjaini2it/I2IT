"""
Name: Mangesh Mahajan
Roll No. : FIB48
Class : IT-B
"""
print("Name: Mangesh Mahajan\nRoll No. : FIB48\nClass : IT-B")
a = int(input("Enter Start Number: "))
b = int(input("Enter End Number: "))
if a % 2 != 0:
    a = a + 1
for i in range(a, b + 1, 2):
    print(i, end=" ")


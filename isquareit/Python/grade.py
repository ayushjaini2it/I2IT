"""
Name: SANSKAR PATIL
Roll No. : FIB51
Class : IT-B
"""
print("Name: SANSKAR PATIL\nRoll No. : FIB51\nClass : IT-B")
marks = float(input("Enter the total marks obtained: "))
if marks >= 90:
    grade = 'A'
elif(marks >= 80 and marks <= 90):
    grade = 'B'
elif marks >= 70 and marks <= 80:
    grade = 'C'
elif marks >= 60 and marks <= 70:
    grade = 'D'
elif marks >= 50 and marks <= 60:
    grade = 'E'
else:
    grade = 'F'
print("Your Grade is:", grade)


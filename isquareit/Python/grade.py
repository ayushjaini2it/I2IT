"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
marks = float(input("Enter the total marks obtained"))

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

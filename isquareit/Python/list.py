"""
Name: SANSKAR PATIL
Roll No. : FIB51
Class : IT-B
"""
def list_operations(students):
    print("List:", students)
    students.append("Mangesh")
    print("List after appending Mangesh:", students)
    students.insert(1, "Ash")
    print("List after inserting Ash at index 1:", students)
    students.pop()
    print("List after popping last element:", students)
    students.remove("Ash")
    print("List after removing Ash:", students)
    students.sort()
    print("List after sorting:", students)
    students.reverse()
    print("List after reversing:", students)
    students.clear()
    print("List after clearing:", students)
def list(l):
    print("List:", l)
    l.append(5)
    print("List after appending 5:", l)
    l.insert(5, 8)
    print("List after inserting 8 at index 5:", l)
    l.remove(4)
    print("List after removing 4:", l)
    l.pop(6)
    l.pop()
    l.sort()
    print("List after sorting:", l)
    l.reverse()
    print("List after reversing:", l)
    print("Index of 3:", l.index(3))
    print("Count of 4:", l.count(4))
    l.clear()
    print("List after clearing:", l)
print("Name: Vedant Panchakshare\nRoll No. : FIB59\nClass : IT-B")
students = ["Ayush", "Atharv", "Daksh", "Shreyash", "Vedant", "Ashutosh"]
list_operations(students)
l = [1, 2,3, 4, 5, 6]
list(l)

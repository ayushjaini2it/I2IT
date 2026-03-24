"""
Name: Mangesh Mahajan
Roll No. : FIB48
Class : IT-B
"""
print("Name: Mangesh Mahajan\nRoll No. : FIB48\nClass : IT-B")
def set_operations(s, s1):
    print("Difference of s and s1:", s.difference(s1))
    print("Difference of s1 and s:", s1.difference(s))
    print("Intersection:", s.intersection(s1))
    print("Symmetric Difference:", s.symmetric_difference(s1))
def set(s):
    s.add("mangesh")
    print("ADD:",s)
    s.remove(3)
    print("Remove:",s)
    s.pop()
    print("Pop:",s)
    s.discard(500)
    print("Discard:",s)
    s.update("Atharv", "Ash")
    print("Update:",s)
    s.update(range(5,10))
    print("Update:",s)
    s.update([1, 2, 3, "Ash"])
    print("Update:",s)
    s.update("Atharv", "Ash")
    print("Update:",s)
s = {1, 2, 3, 5, 7, 9, 23, 43, 666}
s1 = { 5, 4, 3, 6, 8, 9, 10, 66, 53}
set_operations(s, s1)
set(s)

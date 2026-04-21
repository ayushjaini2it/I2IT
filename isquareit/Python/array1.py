"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
import array as arr
a = arr.array('i', [1, 2, 3, 4, 5, 1, 1, 2, 1, 2, 3, 4, 5, 1, 1, 2, 1, 2, 3, 4, 5])
print(a)
print(*a)
print("length:", len(a))
print("count of 1:", a.count(1))
print("index of 2:", a.index(2))
a.append(6)
print("After appending 6:", a)
a.insert(0, 0)
print("After inserting 0 at index 0:", a)
a.remove(5)
print("After removing 5:", a)
a.pop()
print("Popped:", a)
a.extend([7, 8, 9])
print("After extending:", a)
print("Sorted in ascending order:", sorted(a))
print("Sorted in descending order:", sorted(a, reverse=True))
print("Maximum value:", max(a))
print("Minimum value:", min(a))


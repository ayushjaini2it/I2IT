"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
a = 10
b = 67.4
c = True
d = 10 + 5j
e = "abcde"
f = [1, 2, 3,4]
g = {1, 2, 3, 4}
h = {"A" : 5}
i = (1, 2, 3)
print(type(a), type(b), type(c), type(d), type(e), type(f), type(g), type(h), type(i))
# <class 'int'> <class 'float'> <class 'bool'> <class 'complex'> <class 'str'> <class 'list'> <class 'set'> <class 'dict'> <class 'tuple'>
j = 10
k = 67.4
l = True
m = 10 + 5j
n = "abcde"
o = [1, 2, 3, 4]
p = {1, 2, 3, 4}
q = {"A" : 5}
r = (1, 2, 3)
print(id(a), id(j), "\n", id(b), id(k), "\n", id(c), id(l),"\n", id(d), id(m), "\n", id(e), id(n), "\n", id(f), id(o), "\n", id(g), id(p), "\n" , id(h), id(q), "\n" , id(i), id(r))
# 140705589327256 140705589327256 
#  1972763887344 1972763890448 
#  140705588431616 140705588431616 
#  1972729110160 1972763893648 
#  1972764922896 1972764922896 
#  1972719841152 1972764830784 
#  1972763685856 1972764581600 
#  1972764835776 1972764835712 
#  1972764413040 1972764804976
l = [1, 2,3, 4, 5, 6]
l.append(5)
print(l)
l.insert(5, 8)
print(l)
l.remove(4)
print(l)
l.pop(6)
l.pop()
l.sort()
print(l)
l.reverse()
print(l)
l.index(3)
l.append(4, 5, 6, 4, 5,5)
l.append(4)
l.count(4)
l.clear()
print(l)
s = {1, 2, 3, 5, 7, 9, 23, 43, 666}
s1 = { 5, 4, 3, 6, 8, 9, 10, 66, 53}

print("Union:", s.union(s1))
print("Difference of s and s1:", s.difference(s1))
print("Difference of s1 and s:", s1.difference(s))
print("Intersection:", s.intersection(s1))
print("Symmetric Differnece:", s.symmetric_difference(s1))

"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
f1 = open("ayush.txt", 'r')
f2 = open("modified_ayush.txt", 'w+')
f1data = f1.read()
print("f1data: \n", f1data, "\n\n")

print("Number of spaces in f1data:", f1data.count(" "))
print("Number of tabs in f1data:", f1data.count("\t"))
print("Number of newlines in f1data:", f1data.count("\n"))
f1data = f1data.replace(".", "; ")
f2.write(f1data)
f2.seek(0)
f2.write(f1data.replace(" ", "_"))
f2.seek(0)
f2data = f2.read()
print(" f2data:\n", f2data, "\n\n")
f1data = f1.read()
f1data = f1data.replace("\n", "\t\t")
f2.write(f1data)
f2.seek(0)
print(" f2data:\n", f2data, "\n")
f1.close()
f2.close()


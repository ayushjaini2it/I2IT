"""
Name: Aditya Bhagat
Roll No. : FCB22
Class : COMP-B
"""
print("Name: Aditya Bhagat\nRoll No. : FCB22\nClass : COMP-B")

with open("ayush.txt", "r") as f1, open("modified_aditya.txt", "w+") as f2:
    f1data = f1.read()
    print("f1data: \n", f1data, "\n\n")

    print("Number of spaces in f1data:", f1data.count(" "))
    print("Number of tabs in f1data:", f1data.count("\t"))
    print("Number of newlines in f1data:", f1data.count("\n"))

    f2data = f1data.replace(".", "; ")
    f2.write(f2data)
    f2.seek(0)
    print(" f2data:\n", f2.read(), "\n\n")

    f2.seek(0)
    f2.write(f2data.replace(" ", "_"))
    f2.seek(0)
    f2data = f2.read()
    print(" f2data:\n", f2data, "\n\n")

    uppercase_data = f2data.replace("\n", "\t\t").upper()
    f2.seek(0)
    f2.write(uppercase_data)
    f2.seek(0)
    print("Uppercase:\n", f2.read(), "\n")

    lowercase_data = uppercase_data.lower()
    f2.seek(0)
    f2.write(lowercase_data)
    f2.seek(0)
    print("Lowercase:\n", f2.read(), "\n")

    title_data = lowercase_data.title()
    f2.seek(0)
    f2.write(title_data)
    f2.seek(0)
    print(" f2data:\n", f2.read(), "\n")


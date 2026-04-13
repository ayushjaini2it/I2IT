"""
Name: Ayush Jain
Roll No. : FCB44
Class : COMP-B
"""
print("Name: Ayush Jain\nRoll No. : FCB44\nClass : COMP-B")
def string_operations(strings):
    print("Upper:",strings.upper())
    print("Lower:",strings.lower())
    print("Title",strings.title())
    print("Swapcase:",strings.swapcase())
    print("Capitalize:",strings.capitalize())
    print("Index:",strings.index("Name"))
    print("Find:",strings.find("ayush"))
    strings.upper()
    print(strings)
    print("Rfind:",strings.rfind("a"))
    s = strings.replace("ayu", "Ash")
    print("Replace:",s)
def string_methods(s1):
    print("Isupper:",s1.isupper())
    print("Isalnum:",s1.isalnum())
    print("Islower:",s1.islower())
    print("Isdigit:",s1.isdigit())
    print("Count:",s1.count("1"))
strings = "My Name is mangehsH mahajan"
string_operations(strings)
s1 = "Ashuiyhjk123231212321456"
string_methods(s1)



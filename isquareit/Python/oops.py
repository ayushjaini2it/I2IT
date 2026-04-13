class student:
    static_var = 50
    def __init__(self, name):
        self.name = name
        self.age = 20
        self.__private_var = 100
        print("Constructor Executed")
    def display(self):
        print("This is a instance method")
        print("Name:", self.name)
        print("Age:", self.age)
        print("Static Variable:", student.static_var)
        print("Private Variable:", self.__private_var)
    def __del__(self):
        print("Destructor Executed")

s1 = student("Ash")
s2 = student("John")
print("name value: in s1", s1.name)
print("name value: in s2", s2.name)
print("Static Variable in s1:", s1.static_var)
print("Static Variable in s2:", s2.static_var)
student.static_var = 60
print("Static Variable after modification:", s1.static_var)
print("Static Variable after modification:", s2.static_var)
s1 = None
del s2
s2.display()


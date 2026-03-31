class book():
    def details(self):
        self.name = input("Enter the book name: ")
        self.author = input("Enter the book Author name: ")
        self.publisher = input("Enter the book Publisher name: ")
        self.year = input("Enter the publishing year: ")
    def display(self):
        print("Name of the book is:", self.name)
        print("Name of the author is: ", self.author)
        print("Name of the publisher is: ", self.publisher)
        print("Publishing year is: ", self.year)
b1 = book()
b1.details()
b1.display()


  

class student():
    def details(self):
        self.name = input("Enter the Student name: ")
        self.branch = input("Enter the branch name: ")
        self.roll = input("Enter Roll No: ")
        self.pnr = input("Enter the PNR Number: ")
        self.percentile = input("Enter Percentile: ")
        self.age = input("Enter Studnet age: ")
    def display(self):
        print("Name of the book is:", self.name)
        print("Name of the author is: ", self.branch)
        print("Name of the publisher is: ", self.roll)
        print("Publishing year is: ", self.pnr)
        print("Publishing year is: ", self.percentile)
        print("Publishing year is: ", self.age)
s1 = student()
s1.details()
s1.display()
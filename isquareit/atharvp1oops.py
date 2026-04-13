print("NAME : ATHARV SHAMKUWAR\nCLASS : COMP B\nROLLNO : FCB41")
class student():
    def details(self):
        self.name = input("enter the name of the student")
        self.branch = input("enter the branch :")
        self.rollno = int(input("enter the rollno : "))
        self.PnrNo = input("enter the PNR number :")
        self.section = input("enter the section :")
        self.percentile = input("enter the percentile :")
        self.age = input("enter the age of student :")

    def display(self):
        print(" name :",self.name)
        print(" branch :",self.branch)
        print(" rollno :",self.rollno)
        print(" PNR :",self.PnrNo)
        print(" section :",self.section)
        print("percentile :",self.percentile)
        print("age :",self.age)

b1 = student()
b1.details()
b2 = student()
b2.details()

b1.display()
b2.display()
            
                           

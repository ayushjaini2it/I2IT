print("NAME : ATHARV SHAMKUWAR\nCLASS : COMP B\nROLLNO : FCB41")
class books():
    def details(self):
        self.bookname = input("enter the bookname :")
        self.author = input("enter the author name :")
        self.YrOfPub = input("enter year of publish :")
        self.price = int(input("enter the price :"))

    def display(self):
        print(" bookname : ",self.bookname)
        print(" author : ",self.author)
        print(" YrOfPub : ",self.YrOfPub)
        print(" price : ",self.price)

o1 = books()
o2 = books()
o1.details()
o2.details()
o1.display()
o2.display()
        

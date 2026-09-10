#Write a python program to store roll numbers of students in an array or list who attended training program in random order. Write a function for searching wheather a particular student attended the training program or not using linear search and binary search.

def linearSearch(array, key):
	for i in range(len(array)):
		if array[i] == key:
			print("Roll no. found at Index: ", i)
			return
	print("Roll no. not found")

def binarySearch(array,key):
	for i in range (0, len(array)-1):
		for j in range (i+1, len(array)):
			if array[j] < array[i]:
				array[j] += array[i]
				array[i] = array[j] - array[i]
				array[j] -= array[i]
	start = 0
	end = len(array) - 1
	while(end >= start):
		mid = (start+end)//2
		if key == array[mid]:
			print("Roll no. fount at Index: ", mid)
			return
		elif array[mid] > key:
			end = mid - 1
		else:
			start = mid + 1
	print("Roll no. not found")

choice = 0
n= int(input("Enter the Number of Students: "))
array = list(map(int, input("Enter the Roll numbers: ").split()))
key = int(input("Enter the Roll no. to search: "))


choice = int(input("Enter the Type of Search to perform:\n 1: Linear Search\n 2: Binary Search\n : "))
match (choice):
	case 1:
		linearSearch(array, key)
	case 2:
		binarySearch(array, key)
	case _: 
		if choice != 0:
			print("Invalid Choice")
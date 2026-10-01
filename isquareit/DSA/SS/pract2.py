def read_marks():
    n = int(input("Enter the number of students: "))

    if n < 1 or n > 100:
        print("Number of students must be between 1 and 100.")
        return 0, []

    marks = []
    print("Enter the percentage of students:")
    for i in range(n):
        marks.append(float(input(f"Student {i + 1}: ")))

    return n, marks


def display_top_5(arr, n):
    print("The percentage of students top 5 students are:")
    for i in range(min(5, n)):
        print(f"{arr[i]:.2f}", end=" ")
    print()


def bubble_sort(arr, n):
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


def selection_sort(arr, n):
    for i in range(n - 1):
        smallest_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[smallest_index]:
                smallest_index = j
        arr[i], arr[smallest_index] = arr[smallest_index], arr[i]


def insertion_sort(arr, n):
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key


n, percentage = read_marks()
if n == 0:
    raise SystemExit

while True:
    print("\nEnter the sorting algorithm to be used:")
    print("1: Bubble Sort")
    print("2: Selection Sort")
    print("3: Insertion Sort")
    print("-1: Exit")

    choice = int(input("Your choice: "))

    if choice == 1:
        bubble_sort(percentage, n)
        display_top_5(percentage, n)
    elif choice == 2:
        selection_sort(percentage, n)
        display_top_5(percentage, n)
    elif choice == 3:
        insertion_sort(percentage, n)
        display_top_5(percentage, n)
    elif choice == 4:
        display_top_5(percentage, n)
    elif choice == -1:
        print("Exiting the program....")
        break
    else:
        print("Invalid choice")

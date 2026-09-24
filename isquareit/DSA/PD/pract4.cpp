// Create a Student Record Management System using a linked list in C++.
// Use a singly linked list to store student data (RollNo, Name, Marks).
//Perform operations: Add, Delete, Update, Search, Display records in ascending/descending order based on marks or roll number.

#include <iostream>
#include <string>
using namespace std;

struct node{
    int rollno;
    string name;
    int marks;
    node* next = NULL;
    void insert_details(){
        cout << "Enter the Student Name: ";
        cin >> name;
        cout << "Enter the Student Roll no.: ";
        cin >> rollno;
        cout << "Enter the Student Marks: ";
        cin >> marks;
    }
} *start = NULL;

node* create(){
    node* temp = new node;
    temp->insert_details();
    temp->next = NULL;
    return temp;
}

void insert(){
    node* temp = create();
    if(start == NULL|| temp->rollno < start->rollno){
        temp->next = start;
        start = temp;
    }
    else{
        node*ptr = start;
        while(temp->rollno > ptr->rollno && ptr->next != NULL){
            ptr= ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void update(){
    node* ptr = start;
    int roll;
    cout << "Enter the Student Roll no to update marks: ";
    cin >> roll;
    while(ptr->rollno != roll){
        ptr = ptr->next;
    }
    cout << "Enter the New Marks: ";
    cin >> ptr->marks;
}

void del(){
    int roll;
    cout << "Enter the Student Roll no. to remove: ";
    cin >> roll;
    node* ptr = start;
    while(ptr->next->rollno != roll){
        ptr = ptr->next;
    }
    node* temp = ptr->next;
    ptr->next = ptr->next->next;
    cout << "Student record removed successfully.";
    delete temp;
}
void search(){
    int roll;
    cout << "Enter the Student Roll no. to search: ";
    cin >> roll;
    node* ptr = start;
    while(ptr->rollno != roll){
        ptr = ptr->next;
    }
    cout << "Student Name: " << ptr->name << endl;
    cout << "Student Roll no.: " << ptr->rollno << endl;
    cout << "Student Marks: " << ptr->marks << endl;
}
void display(){
    node* ptr = start;
    cout << "Student Records: " << endl;
    while(ptr != NULL){
        cout << "Student Name: " << ptr->name << endl;
        cout << "Student Roll no.: " << ptr->rollno << endl;
        cout << "Student Marks: " << ptr->marks << endl << endl;
        ptr = ptr->next;
    }
}
int main(){
    int choice;
    do{
        cout << "1. Add Student Record" << endl;
        cout << "2. Update Student Record" << endl;
        cout << "3. Delete Student Record" << endl;
        cout << "4. Search Student Record" << endl;
        cout << "5. Display Student Records" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                update();
                break;
            case 3:
                del();
                break;
            case 4:
                search();
                break;
            case 5:
                display();
                break;
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }while(choice != 6);


    return 0;
}
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
    if(start == NULL){
        start = temp;
    }
    else{
        node*ptr = start;
        while(temp->rollno > ptr->rollno && ptr != NULL){
            ptr= ptr->next;
        }
        if(ptr->next == NULL){
            ptr->next = temp;
        }
        else{
            temp->next = ptr->next;
            ptr->next = temp;
        }
    }
}

void update(){
    
}


int main(){



    return 0;
}
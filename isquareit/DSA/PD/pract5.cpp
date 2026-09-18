// Write a C++ program to implement the following data structures and its operations using linked list: 1. Stack 2. Queue
#include <iostream>
using namespace std;


class Stack{
    struct Node{
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
    };
    Node* top;
    public:
        Stack(){
            top = NULL;
        }
        void push(int val){
            Node* temp = new Node(val);
            if(top == NULL){
                top = temp;
            }
            else{
                temp->next = top;
                top = temp;
            }
        }
        int pop(){
            if(top == NULL){
                cout << "The Stack is Empty";
                return -1;
            }else{
                Node* temp = top;
                top = top->next;
                int element = temp->data;
                delete temp;
                return element;
            }
        }
        void display(){
            if(top == NULL){
                cout << "The stack is Empty";
            }
            else{
                Node* ptr = top;
                while(ptr != NULL){
                    cout << ptr->data << " ";
                    ptr = ptr->next;
                }
                cout << endl;
            }
        }
        bool isEmpty(){
            return top == NULL;
        }

};

class Queue{
    struct Node{
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
    };
    Node* front;
    Node* rear;
    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }
        void enqueue(int val){
            Node* temp = new Node(val);
            if(front == NULL){
                front = temp;
                rear = temp;
            }
            else{
                rear->next = temp;
                rear = temp;
            }
        }
        int dequeue(){
            if(front == NULL){
                cout << "The Queue is Empty";
                return -1;
            }
            else{
                Node* temp = front;
                front = front->next;
                int element = temp->data;
                delete temp;
                return element;
            }
        }
        void display(){
            if(front == NULL){
                cout << "The Queue is Empty";
            }
            else{
                Node* ptr = front;
                while(ptr != NULL){
                    cout << ptr->data << " ";
                    ptr = ptr->next;
                }
                cout << endl;
            }
        }
        bool isEmpty(){
            return front == NULL;
        }
}; 

// struct node{
//     int data;
//     node* next;
// }*top = NULL;

// node* create_stack(){
//     int val;
//     cout << "Enter the Element: ";
//     cin >> val;
//     node* temp = new node;
//     temp->next = NULL;
//     temp->data = val;
//     return temp;

// }

// void push_stack(){
// 	node* temp = create_stack();
//     if(top == NULL){
// 	top = temp;
//     }
//     else{
//         temp->next = top;
//         top = temp;
//         cout << "Element Inserted to the Stack" << endl;
//     }
// }
// void pop_stack(){
//     if(top == NULL){
//         cout << "The Stack is Empty.\n";
//     }
//     else{
//         node* temp = top;
//         top = temp -> next;
//         cout << "Popped element: " << temp -> data << endl;
//         delete temp;
//     }
// }
// void display_stack(){
//     if(top == NULL){
//         cout << "The Stack is Empty.\n";
//     }
//     else{
//         node* temp = top;
//         while(temp != NULL){
//             cout << temp -> data << " ";
//             temp = temp -> next;
//         }
//         cout << endl;
//     }
// }

// node* create_queue(){
//     int val;
//     cout << "Enter the Element: ";
//     cin >> val;
//     node* temp = new node;
//     temp->next = NULL;
//     temp->data = val;
//     return temp;
// }
// void enqueue(){
// 	node* temp = create_queue();
//     if(top == NULL){
// 	top = temp;
//     }
//     else{
// 	node* temp = create_queue();
//         top->next = temp;
//         top = temp;
//         cout << "Element Inserted to the Queue" << endl;
//     }
// }
// void dequeue(){
//     if(top == NULL){
//         cout << "The Queue is Empty.\n";
//     }
//     else{
//         node* temp = top;
//         top = temp -> next;
//         cout << "Dequeued element: " << temp -> data << endl;
//         delete temp;
//     }
// }
// void display_queue(){
//     if(top == NULL){
//         cout << "The Queue is Empty.\n";
//     }
//     else{
//         node* temp = top;
//         while(temp != NULL){
//             cout << temp -> data << " ";
//             temp = temp -> next;
//         }
//         cout << endl;
//     }
// }
int main(){
    cout << "Stack: \n";
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.isEmpty() ? cout << "Stack is Empty\n" : cout << "Stack is not Empty\n";

    cout << "\nQueue: \n";
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.dequeue();
    q.display();

}









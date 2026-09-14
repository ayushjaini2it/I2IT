#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream f1;
    char data[100];
    f1.open("example.txt", ios::out);
    cout << "Writing to a file:" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    f1 << data << endl;
    cout << "Enter your age: ";
    cin.getline(data, 100);
    f1 << data << endl;
    f1.close();

    f1.open("example.txt", ios::in);
    cout << "\nReading from a file:" << endl;
    f1.getline(data, 100);
    cout << data << endl;
    f1.getline(data, 100);
    cout << data << endl;
    f1.close();
    return 0;
}


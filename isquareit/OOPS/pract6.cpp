#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream f1, f2;
    char data[100];
    f1.open("example.txt", ios::in);
    f2.open("example.txt", ios::out);
    f2 << "Example text";
    f2.seekp(0, ios:: beg);
    f1.getline(data, 100);
    f2.close();
    f1.close();
    cout << data << endl;
    return 0;
}
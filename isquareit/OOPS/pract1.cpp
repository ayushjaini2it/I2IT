#include <iostream>
using namespace std;

class complex{
    float x, y;
public:
    complex(){
        x = 0;
        y = 0;
    }
    complex operator+(complex c){
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    complex operator*(complex c){
        complex temp;
        temp.x = x * c.x - y * c.y;
        temp.y = x * c.y + y * c.x;
        return temp;
    }

    friend ostream & operator<<(ostream &output, complex c){
        output << c.x << " + i" << c.y;
    }
    friend istream & operator>>(istream &input, complex &c){
        cout << "Enter the Real part: ";
        input >> c.x;
        cout << "Enter the Imaginary part: ";
        input >> c.y;
    }
};

int main(){
    complex c1, c2, c3, c4;
    cout << "Enter the first complex number: " << endl;
    cin >> c1;
    cout << "Enter the second complex number: " << endl;
    cin >> c2;

    c3 = c1 + c2;
    cout << "The sum of the two complex numbers is: "  << c3 << endl;
    

    c4 = c1 * c2;
    cout << "The product of the two complex numbers is: " << c4 << endl;

    return 0;
}
#include <iostream>
using namespace std;

class add{
	int a, b, result;
public:
    int c;
    double o;
    long z;
    void sum(int a, int b){
        c = a + b;
        cout << "Sum: " << c << endl;
    }
    void sum(double m, double n){
        o = m + n;
        cout << "Sum: " << o << endl;
    }
    void sum(long x, long y){
        z = x + y;
        cout << "Sum: " << z << endl;
    }
};
int main(){
add obj;
obj.sum(5, 10);
obj.sum(5.7, 10.5);
obj.sum(500.64532, 100.1121);
return 0;
}

#include <iostream>
using namespace std;

class sum{
	int a = 10, b = 20, result;
    public:
    sum(){
        result = a + b;
        cout << "Default: Sum: " << result << endl;
    }
    sum(int a, int b){
        result = a + b;
        cout << "Parameterized: Sum: " << result << endl;
    }
    sum(const sum &add){
        a = add.a;
        b = add.b;
        result = a + b;
        cout << "Copy: Sum: " << result << endl;
    }
};
int main(){
sum obj;
sum obj2(5, 10);
sum obj3(obj2);
return 0;
}

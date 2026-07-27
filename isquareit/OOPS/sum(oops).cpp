#include <iostream>
using namespace std;

class add{
	int a, b, result;
public:
	int a, b, c;
	void getdata(){
		cout << "Enter a Number(a): " << endl;
		cin >> a;
		cout << "Enter a Number(b): " << endl;
		cin >> b;
	}
	void ad(){
		c = a + b;
	}
	void res(){
	cout << "Sum: " << c;
	}
 
};
int main(){
add obj;
obj.getdata();
obj.ad();
obj.res();
return 0;
}

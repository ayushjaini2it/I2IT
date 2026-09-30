#include <iostream>

using namespace std;

class UserException{
    public:
        string message;
        UserException(string msg){
            message = msg;
        }
};

int main(){
    int age;
    double income;
    string city;
    string vehicle;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter income: ";
    cin >> income;
    cout << "Enter City: ";
    cin >> city;
    cout << "Does the user has a 4-Wheeler (yes/no): ";
    cin >> vehicle;
    try{
        if(age < 18 || age > 55){
            throw UserException("User Age should be between 18 and 55");
        }
        if(income < 50000 || income > 100000){
            throw UserException("User income is not in range 50000");
        }
        if(city != "Pune" && city != "Banglore" && city != "Chennai" && city != "Mumbai"){
            throw UserException("User should be living in Pune, Mumbai, Banglore, Chennai");
        }
        if( vehicle != "yes"){
            throw UserException("User must have a 4-Wheeler");
        }
        cout << "User satisfies all conditions" << endl;
    }
    catch(UserException &except){
        cout << "Exception: " << except.message << endl;
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string name, cls, dri_lic, dob;
        int rollno;
        char *div, *bdgrp;
        long int ctnum;
        
    public:
        Student(){
            name = "";
            dob = "";
            cls = "";
            rollno = 0;
            ctnum = 0;
            div = new char[1];
            bdgrp = new char[3];
        }
        ~Student(){
            delete[] div;
            delete[] bdgrp;
        }

        friend class updateInfo;

        void inputInfo(){
            cin.ignore();
            cout << "\n\n -------------*Student Database*-------------\n \n";
            cout << "Student Name: ";
            getline(cin, name);
            cout << "\nClass: ";
            getline(cin,cls);
            cout << "\nDivision: ";
            div = new char[10];
            cin >> div;
            cout << "\nRoll Number: ";
            cin >> rollno;
            cout << "\nDate of Birth (Format- dd/mm/yyyy): ";
            cin.ignore();
            getline(cin,dob);
            cout << "\nBlood Group (A+, A-, B+, B-, AB+, AB-, O+, O-): ";
            cin >> bdgrp;
            cout << "\nDriving License Number: ";
            cin >> dri_lic;
        }
};

class 







int main(){

    return 0;
}
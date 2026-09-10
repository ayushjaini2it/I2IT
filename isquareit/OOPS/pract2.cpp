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
rollno  = 0;
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
            getline(cin, cls);
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

class updateInfo{
    public:
        long int ctnum;
        void getinfo(){
            try{             
                cout << "\nContact Number: ";
                cin >> ctnum;
                if (ctnum < 1000000000 || ctnum > 9999999999) throw ctnum;
            }
            catch (long int ctnum){
                cout << "\nException caught!";
                cout << "\nContact number entered '" << ctnum << "' is too long!\nTry again!";
                cout << "\nContact Number: ";
                cin >> ctnum;
                }
        }
        int getroll(Student &obj){
            return obj.rollno;
        } 
        void show(Student &obj);
    };

    void updateInfo::show(Student &obj){
        cout << "\nStudent Name: " << obj.name;
        cout << "\nClass: " << obj.cls;
        cout << "\nDivision: " << obj.div;
        cout << "\nRoll number: " << obj.rollno;
        cout << "\nDate of Birth: " << obj.dob;
        cout << "\nBlood Group: " << obj.bdgrp;
        cout << "\nDriving licence number: " << obj.dri_lic;
        cout << "\n-------------------------------------\n";
    }





int main(){
    Student x[30];
    int i, n;
    cout << "Enter the number of students: ";
    cin >> n;
    updateInfo s[30];
    for (i = 0; i < n; i++){cout << "\n---------------------------------------\n\nEnter Details of student " << i + 1;
        x[i].inputInfo();
        s[i].getinfo();
    }
    cout << "\n_____________________________________________________________" << endl;
    for (i = 0; i < n; i++){
        s[i].show(x[i]);
    }
    while (true){
        int r, ch;
        int flag = 0;
        cout << "\nEnter student roll number to get info: ";
        cin >> r;
        for (i = 0; i < n; i++){
            if (r == s[i].getroll(x[i])){
                s[i].show(x[i]);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "\nRecord not found!";
            cout << "\nDo you want to continue? (Enter 1 for Yes, 0 for No): ";
            cin >> ch;
            if (ch != 1)
                break;
    }
    cout<<"\nEnding the Program!";
    return 0;
}
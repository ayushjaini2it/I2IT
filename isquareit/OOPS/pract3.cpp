#include <iostream>
#include <cstring>
#include <exception>

using namespace std;

class publication{
    protected:
        string title;
        float price;
    public:
        publication(string title = "No Title", float price = 0.0){}

};
class book: public publication{
    int pages;
    public:
        book(string title = "No Title", float price = 0.0, int pages = 0){}
        void getb();
        void displayb();
};
class tape: public publication{
    float min;
    public:
        tape(string title = "No Title", float price = 0.0, float min = 0.0){}
        void gett();
        void displayt();
};


void book::getb(){
    cout << "Enter the Book Details:" << endl;
    cout << "Enter the Book Title: " << flush;
    cin.ignore(1, '\n');
    getline(cin, title);
    cout << "Enter the Book Price: ";
    cin >> price;
    cout << "Enter the Total No. of Book Pages: ";
    cin >> pages;
    try{
        if(pages > 500 && pages < 1500){
            if(price > 100 && price < 2000){
                displayb();
            }else{
                throw price;
            }
        }else{
            throw pages;
        }
    }
    catch(int p){
        cout <<"Caught Exception in the book function." << endl;
        cout << "Entered invaild number of pages: " << p << endl;
        title = "0";
        pages = 0;
        price = 0.0;
        displayb();
        throw;
    }
    catch(float pr){
        cout <<"Caught Exception in the book function." << endl;
        cout << "Entered invaild price: " << pr << endl;
        title = "0";
        pages = 0;
        price = 0.0;
        displayb();
        throw;
    }
}

void book::displayb(){
    cout << "Entered Book Details: " << endl << endl;
    cout << "Book Title: " << title << endl;
    cout << "Book Price: " << price << endl;
    cout << "Book Pages: " << pages << endl;
}

void tape::gett(){
    cout << "Enter the Tape Details:" << endl;
    cout << "Enter the Tape Title: " << flush;
    cin.ignore(1, '\n');
    getline(cin, title);
    cout << "Enter the Tape Price: ";
    cin >> price;
    cout << "Enter the Total No. of Tape Minutes: ";
    cin >> min;
    try{
        if(min > 30.0 && min < 90.0){
            if(price > 500 && price < 1000){
                displayt();
            }else{
                throw price;
            }
        }else{
            throw &min;
        }
    }
    catch(float* m){
        cout <<"Caught Exception in the tape function." << endl;
        cout << "Entered invaild number of minutes: " << *m << endl;
        title = "0";
        min = 0.0;
        price = 0.0;
        displayt();
        throw;
    }
    catch(float pr){
        cout <<"Caught Exception in the tape function." << endl;
        cout << "Entered invaild price: " << pr << endl;
        title = "0";
        min = 0.0;
        price = 0.0;
        displayt();
        throw;
    }
}

void tape::displayt(){
    cout << "Entered Tape Details: " << endl << endl;
    cout << "Tape Title: " << title << endl;
    cout << "Tape Price: " << price << endl;
    cout << "Tape Minutes: " << min << endl;
}

int main(){
    book b;
    tape t;
    int choice;
    cout << "Select the choice:\n1: Enter Book details.\n2: Enter Tape details." << endl;
    cin >> choice;

    switch(choice){
        case 1:
            try{
                b.getb();
            }catch(int i){
                cout << "Exception Caught in the main() function." << endl;
            }
            catch(float i){
                cout << "Exception Caught in the main() function." << endl;
            }
            break;
        case 2:
            try{
                t.gett();
            }catch(float* i){
                cout << "Exception Caught in the main() function." << endl;
            }
            catch(float i){
                cout << "Exception Caught in the main() function." << endl;
            }
            break;
        default:
            cout << "Invalid Choice Entered..!! Try Agian" << endl;
        }
}
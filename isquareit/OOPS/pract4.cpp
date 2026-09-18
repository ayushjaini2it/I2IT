#include <iostream>
#include <cstring>

using namespace std;

class Books{
    char* title;
    char* author;
    char* publisher;
    float price;
    int stock;

public: 
    Books(const char* t, const char* p, const char*a, float pr, int s){
        title = new char[strlen(t) + 1];
        strcpy(title, t);
        author = new char[strlen(a) + 1];
        strcpy(author, a);
        publisher = new char[strlen(p) + 1];
        strcpy(publisher, p);
        price = pr;
        stock = s;
    }
    Books() : Books("", "", "", 0.00, 0) {
    }

    void getDetails(){
        delete[] title;  // Free old memory
        delete[] author;
        delete[] publisher;
        
        title = new char[100];
        author = new char[100];
        publisher = new char[100];
        
        cout << "Enter the Title of Book: ";
        cin.ignore();
        cin.getline(title, 100);
        cout << "Enter the Author Name: ";
        cin.getline(author, 100);
        cout << "Enter the Publisher Name: ";
        cin.getline(publisher, 100);
        cout << "Enter the Book Price: ";
        cin >> price;
        cout << "Enter the Stock Postition: ";
        cin >> stock;
    }

    bool searchBook(const char* t, const char* a){
        return (strcmp(title, t) == 0 && strcmp(author, a) == 0);
    }
    void displayBook(){
        cout << "Book Details" << endl;
        cout << "------------" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        printf("Price: %.2f\n", price);
        cout << "Stock Position: " << stock << endl;
    }

    void purchaseBook(){
        int copies;
        cout << "Enter the Number of copies required: ";
        cin >> copies;

        if(copies <= stock){
            stock -= copies;
            int totalCost = price*copies;
            displayBook();
            cout << "Total cost: " << totalCost << endl;
        }
    }
    ~Books(){
        delete[] title;
        delete[] author;
        delete[] publisher;
    }
};

int main(){
    int n;
    cout << "Enter the Number of Books in Inventory: ";
    cin >> n;

    Books* inventory = new Books[n];

    cout << "Enter Book Details:" << endl;
    cout << "-------------------" << endl << endl;
    for(int i = 0; i < n; i++){
        printf("Book %d:\n", i+1);
        cout << "--------" << endl;
        inventory[i].getDetails();
    }
    char searchTitle[100], searchAuthor[100];
    cout << endl << endl <<  "Enter the title of the book to search: ";
    cin.ignore();
    cin.getline(searchTitle, 100);

    cout << "Enter the Author Name: ";
    cin.getline(searchAuthor, 100);

    for(int i = 0; i < n; i++){
        if(inventory[i].searchBook(searchTitle, searchAuthor)){
            cout << "Book is available.." << endl;
            inventory[i].purchaseBook();
            delete[] inventory;
            return 0;
        }
    }
    
    cout << "Book is not Available.." << endl;
    return 0;
}

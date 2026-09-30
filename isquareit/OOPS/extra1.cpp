#include <iostream>
#include <cstring>
#include <fstream>

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
    void fetchBook(int book_index){
        fstream f1;
        delete[] title, author, publisher;
        f1.open("inventory.txt", ios::in);
        for(int i = 0; i < book_index+2; i++){
            f1.ignore(100, '\n');
        }
        char* line = new char[100];
        f1.getline(line, 100);
        title = new char[strlen(line) + 1];
        strcpy(title, line);
        cout << "Title: " << title << endl;
        f1.getline(line, 100);
        author = new char[strlen(line) + 1];
        strcpy(author, line);
        f1.getline(line, 100);
        publisher = new char[strlen(line) + 1];
        strcpy(publisher, line);
        delete[] line;
        f1 >> price;
        f1 >> stock;
        f1.close();
    }
    void saveBook(){
        fstream f1;
        int count;
        f1.open("inventory.txt", ios::in | ios::out);
        f1 >> count;
        count = count+1;
        f1.clear();
        f1.seekp(0, ios::beg);
        f1 << count << endl;
        cout << count << endl;
        f1.close();
        f1.open("inventory.txt", ios::app);
        f1 << "--------------\n";
        f1 << title << endl;
        f1 << author << endl;
        f1 << publisher << endl;
        f1 << price << endl;
        f1 << stock << endl;
        f1.close();
    }

    void getDetails(){
        delete[] title;  
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

    void purchaseBook(int book_index){
        int copies;
        fstream f1("inventory.txt", ios::out | ios::in  );
        cout << "Enter the Number of copies required: ";
        cin >> copies;
        for(int i = 0; i < 6*book_index+6; i++){
            f1.ignore(100, '\n');
        }

        if(copies <= stock){
            stock -= copies;
            int totalCost = price*copies;
            displayBook();
            cout << "Total cost: " << totalCost << endl;
        }
        f1 << stock << endl;
        f1.close();
    }
    ~Books(){
        delete[] title;
        delete[] author;
        delete[] publisher;
    }
};

int bookcount(){
    fstream f1;
    f1.open("inventory.txt", ios::in);
    int count;
    f1 >> count;
    f1.close();
    return count;
}
int main(){
    int n, count;
    cout << "Enter the Number of Books in Inventory: ";
    cin >> n;

    cout << "Enter Book Details:" << endl;
    cout << "-------------------" << endl << endl;
    for(int i = 0; i < n; i++){
        printf("Book %d:\n", i+1);
        cout << "--------" << endl;
        Books book;
        book.getDetails();
        book.saveBook();
    }

    char searchTitle[100], searchAuthor[100];
    cout << endl << endl <<  "Enter the title of the book to search: ";
    cin.ignore();
    cin.getline(searchTitle, 100);

    cout << "Enter the Author Name: ";
    cin.getline(searchAuthor, 100);
    int i = 0;
    count = bookcount();
    for(i = 0; i < count; i++){
        Books book;
        book.fetchBook(6*i);
        if(book.searchBook(searchTitle, searchAuthor)){
            cout << "Book is available.." << endl;
            book.purchaseBook(i);
            return 0;
        }
    }
    
    cout << "Book is not Available.." << endl;
    return 0;
}

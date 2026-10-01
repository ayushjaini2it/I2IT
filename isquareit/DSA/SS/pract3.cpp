
#include <bits/stdc++.h>
using namespace std;

void checkPalindrome(const string& str) {
    int n = str.length();
    bool isPalindrome = true;
    for(int i = 0; i < n/2; i++){
        if(str[i] != str[n-i-1]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }
}
void reverseString(string& str) {
    int n = str.length();
    for(int i = 0; i < n/2; i++){
        swap(str[i], str[n-i-1]);
    }
    cout << "Reversed string: " << str << endl;
}
int main(){
    int choice;
    cout << "Choose an option:\n1. Check Palindrome\n2. Reverse String\nEnter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:{
            cout << "Enter a string to check palindrome: ";
            string str;
            getline(cin, str);
            checkPalindrome(str);
            break;
        }
        case 2:{
            cout << "Enter a string to reverse: ";
            string str;
            getline(cin, str);
            reverseString(str);
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}

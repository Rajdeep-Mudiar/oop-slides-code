#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int choice;
    cout << "1. Number\n2. Word\n3. String\nEnter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1: {
            int num, original, reversed = 0;
            cout << "Enter number: ";
            cin >> num;

            original = num;
            while(num > 0) {
                reversed = reversed * 10 + num % 10;
                num /= 10;
            }

            if(original == reversed)
                cout << "Palindrome Number";
            else
                cout << "Not Palindrome Number";
            break;
        }

        case 2: {
            string word;
            cout << "Enter word: ";
            cin >> word;

            string rev = word;
            reverse(rev.begin(), rev.end());

            if(word == rev)
                cout << "Palindrome Word";
            else
                cout << "Not Palindrome Word";
            break;
        }

        case 3: {
            string str;
            cout << "Enter string: ";
            cin.ignore();
            getline(cin, str);

            string temp = str;
            reverse(temp.begin(), temp.end());

            if(str == temp)
                cout << "Palindrome String";
            else
                cout << "Not Palindrome String";
            break;
        }

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
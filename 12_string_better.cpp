#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin, s); // Read a full line of input into the string variable 's'
    cout<<"You entered: "<<s<<endl; // Output the entered string
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    while(cin>>s){ // Read input until EOF
        cout<<s<<" "; // Print the entered string followed by a space
    }
    return 0;
}
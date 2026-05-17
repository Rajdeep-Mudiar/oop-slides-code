#include <iostream>
#include <string>
using namespace std;
int main(){
    string name[5];
    cout<<"Enter your name: ";
    getline(cin,name[0]);
    cout<<"Stored name is :"<<name[0]<<endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    for(int i=1;i<=5;i++){
        cout<<name<<endl;
    }
    return 0;
}

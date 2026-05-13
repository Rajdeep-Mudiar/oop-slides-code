#include<iostream>
#include<string>
using namespace std;
int main(){
    string first,second,third;
    cout<<"Enter 1st string: ";
    getline(cin, first);
    cout<<"Enter 2nd string: ";
    getline(cin, second);
    third=first +" " + second;
    cout<<"Concatenated string: "<<third<<endl;

    cout<<"You entered:"<<endl;
    cout<<"1st: "<<first<<endl;
    cout<<"2nd: "<<second<<endl;
    cout<<"3rd: "<<third<<endl;

    cout<<"Length of 1st string: "<<first.size()<<endl; // Get the length of the first string
    cout<<"Length of 2nd string: "<<second.length()<<endl; // Get the length of the second string
    cout<<"Length of 3rd string: "<<third.size()<<endl; // Get the length of the third string

    cout<<"Is 1st string empty? "<<first.empty()<<endl; // Check if the first string is empty
    cout<<"Is 2nd string empty? "<<second.empty()<<endl; // Check if the second string is empty  
    cout<<"Is 3rd string empty? "<<third.empty()<<endl; // Check if the third string is empty

    return 0;
}
//This example will not work
#include<iostream>
using namespace std;

int main(){
    cout<<"Start"<<endl;
    try{
        //start a try block
        cout<<"Inside try block"<<endl;
        throw 100; //throw an error
        cout<<"This will not execute";
    }

    catch(double i){
        //won't work for an int exception
        cout<<"Caught an exception -- value is: ";
        cout<<i<<endl;
    }

    cout<<"End";
    return 0;
}
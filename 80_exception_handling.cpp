#include<iostream>
using namespace std;

void Xtest(int test){
    cout<<"Inside Xtest, test is: "<<test<<endl;
    if(test){
        throw test;
    }
}

int main(){
    cout<<"Start"<<endl;
    try{
        //start a try block
        cout<<"Inside try block"<<endl;
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch(int i){
        //catch an error
        cout<<"Caught an exception -- value is: ";
        cout<<i<<endl;
    }

    cout<<"End";
    return 0;
}

#include<iostream>
using namespace std;

void Xhandler(int test){
    try{
        if(test==0){
            throw test; //throw int
        }

        if(test==1){
            throw 'a'; //throw char
        }

        if(test==2){
            throw 123.23; //throw double
        }
    }

    catch(int i){
        //catch an int exception
        cout<<"Caught an integer"<<endl;
    }

    catch(...){
        //catch all exceptions
        cout<<"Caught One! "<<endl;
    }
}

int main(){
    cout<<"Start"<<endl;
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);

    cout<<"End";

    return 0;
}
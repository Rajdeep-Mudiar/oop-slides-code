#include <iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"Constructing base "<<endl;
    }

    ~base(){
        cout<<"Destructing base "<<endl;
    }
};

class derived1 : public base{
    public:
        derived1(){
            cout<<"Constructing derived1"<<endl;
        }

        ~derived1(){
            cout<<"Destructing derived1"<<endl;
        }
};

class derived2 : public derived1{
    public:
        derived2(){
            cout<<"Constructing derived2"<<endl;
        }

        ~derived2(){
            cout<<"Destructing derived2"<<endl;
        }
};

int main(){
    derived2 ob;

    //construct and destruct ob
    return 0;
}
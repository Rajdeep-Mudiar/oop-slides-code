//This program contains an error and will not compile

#include<iostream>
using namespace std;

class base{
    public:
        int i;
};

class derived1: public base{
    public:
        int j;
};

//derived inherits base

class derived2 : public base{
    public:
        int k;
};

/*
derived3 inherits both derived1 and derived2.
This means there are 2 copies of base in derived3!
*/

class derived3:public derived1,public derived2{
    public:
        int sum;
};

int main(){
    derived3 ob;

    ob.i=10; //this is ambiguous which i??
    ob.j=20;
    ob.k=30;

    //i ambiguous here,too
    ob.sum=ob.i + ob.j + ob.k;

    //also ambiguous,whic i?
    cout<<ob.i<<" "<<ob.j<<" "<<ob.k<<" "<<ob.sum<<endl;
    return 0;
}
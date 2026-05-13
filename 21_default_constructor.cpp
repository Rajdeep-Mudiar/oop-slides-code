/*
Default Constructor --> A constructor which has no arguments is 
known as default constructor

*/

#include<iostream>
using namespace std;
class Employee{
    public:
    Employee(){
        cout<<"Printed"<<endl;
    }
};

int main(void){
    Employee e1;
    Employee e2;
    return 0;
}
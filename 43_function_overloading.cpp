#include<iostream>
using namespace std;

int myfunc(int i); //these differ in types of parameters 
double myfunc(double i);

int main(){

    cout<<myfunc(10)<<" "; //calls myfunc(int i)
    cout<<myfunc(5.4); //calls myfunc(double i)

    return 0;
}

double myfunc(double i){
    return i;
}

int myfunc(int i){
    return i;
}
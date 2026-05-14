#include <iostream>

int myfunc(int i);//these differ in no of parameters
int myfunc(int i,int j);

int main(){
    cout<<myfunc(10)<<" "; //calls mufunc(int i)
    cout<<myfunc(4,5); //calls myfunc(int i,int j)
    return 0;
}

int myfunc(int i){
    return i;
}

int myfunc(int i,int j){
    return i*j;
}
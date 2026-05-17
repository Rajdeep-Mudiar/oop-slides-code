#include <iostream>
using namespace std;


int add(int a,int b){
    return a+b;
}

int multiply(int a,int b){
    return a*b;
}
int main(){
    int (*func) (int,int);
    func=add;

    cout<<"Addition: "<<func(2,4)<<endl;

    func=multiply;

    cout<<"Multiply: "<<func(2,4);

    return 0;
}
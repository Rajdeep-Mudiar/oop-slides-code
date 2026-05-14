#include <iostream>
using namespace std;

class Complex{
    float real;
    float imag;

    public:
        void setNumber(float a,float b){
            this->real=a;
            this->imag=b;
        }

        void show(Complex ob1,Complex ob2);
};

void Complex::show(Complex ob1,Complex ob2){
    cout<<"First complex number: "<<ob1.real<<"+ "<<ob1.imag<<"i"<<endl;
    cout<<"Second complex number: "<<ob2.real<<"+ "<<ob2.imag<<"i"<<endl;
}

int main(){
    Complex a1,a2,a3;

    a1.setNumber(11,12);
    a2.setNumber(3,4);
    a1.show(a1,a2);
    a3=a1+a2;
    return 0;
}
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

        void show(Complex ob);
        Complex operator +(Complex c2){
            Complex temp;
            temp.real=real+c2.real;
            temp.imag=imag+c2.imag;
            return temp;
        }
};

void Complex::show(Complex ob){
    cout<<"First complex number: "<<ob.real<<" + "<<ob.imag<<"i"<<endl;
}
int main(){
    Complex a1,a2,a3;
    a1.setNumber(11,12);
    a2.setNumber(3,4);

    a1.show(a1);
    a2.show(a2);

    a3=a1+a2;

    a3.show(a3);

    return 0;
}
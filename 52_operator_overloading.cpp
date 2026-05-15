#include <iostream>
using namespace std;

class Complex{

    float real;
    float imag;

public:

    void setNumber(float a,float b){

        this->real = a;
        this->imag = b;
    }

    void show(){

        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex operator+(Complex ob);
};

// Overload + operator
Complex Complex::operator+(Complex ob){

    Complex temp;

    temp.real = real + ob.real;
    temp.imag = imag + ob.imag;

    return temp;
}

int main(){

    Complex a1,a2,a3;

    a1.setNumber(11,12);
    a2.setNumber(3,4);

    cout<<"First complex number: ";
    a1.show();

    cout<<"Second complex number: ";
    a2.show();

    a3 = a1 + a2;

    cout<<"Addition: ";
    a3.show();

    return 0;
}
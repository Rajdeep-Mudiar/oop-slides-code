#include<iostream>
using namespace std;

class loc{
    int longitude,latitude;
    public:
        loc(){} //needed to construct
        loc(int lg,int lt){
            longitude=lg;
            latitude=lt;
        }

        void show(){
            cout<<longitude<<" ";
            cout<<latitude<<endl;
        }

        loc operator+(loc op2);
        loc operator=(loc op2);
        loc operator++();
};

loc loc::operator+(loc op2){
    loc temp;
    temp.longitude=op2.longitude + longitude;
    temp.latitude=op2.latitude + latitude;

    return temp;
}

//Overload assignment for loc
loc loc::operator=(loc op2){
    longitude=op2.longitude;
    latitude=op2.latitude;
    return *this; // i.e, return object that generated call
}

//Overload prefix ++ for loc
loc loc::operator++(){
    longitude++;
    latitude++;
    return *this;
}

int main(){
    cout<<"Initializing objects ..."<<endl;
    loc ob1(10,20),ob2(5,30),ob3(90,90);
    ob1.show();
    ob2.show();
    ++ob1;

    cout<<"After incrementing ob1...."<<endl;
    ob1.show(); //displays 11 21
    ob2=++ob1;

    cout<<"Status of ob1 and ob2"<<endl;
    ob1.show(); //displays 12 22
    ob2.show(); //displays 12 22

    return 0;
}
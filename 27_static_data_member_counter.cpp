#include<iostream>
using namespace std;

class Counter{
    public:
        static int count;

        Counter(){
            count++;
        }

        ~Counter(){
            count--;
        }
};

// Definition of static member
int Counter::count = 0;

void f(){
    Counter temp;
    cout << "Inside f(): " << Counter::count << endl;
    //temp is destroyed when f() returns
}

int main(){
    Counter o1;
    cout << "Objects in existence: " << Counter::count << endl;

    Counter o2;
    cout << "Objects in existence: " << Counter::count << endl;

    Counter o3;
    cout << "Objects in existence: " << Counter::count << endl;

    f();

    Counter o4;
    cout << "Objects in existence: " << Counter::count << endl;

    return 0;
}
// Program demonstrating inheritance of Virtual Functions

#include <iostream>
using namespace std;

// Base class
class base {
public:

    // Virtual function
    virtual void vfunc() {
        cout << "This is base's vfunc().\n";
    }
};

// derived1 inherits from base
class derived1 : public base {
public:

    // Override virtual function
    void vfunc() {
        cout << "This is derived1's vfunc().\n";
    }
};

/*
derived2 inherits from derived1.

The virtual function vfunc() is inherited
and still remains virtual in derived2.
*/
class derived2 : public derived1 {
public:

    // Override virtual function again
    void vfunc() {
        cout << "This is derived2's vfunc().\n";
    }
};

int main() {

    // Base class pointer
    base *p, b;

    // Objects of derived classes
    derived1 d1;
    derived2 d2;

    // Point to base object
    p = &b;

    // Access base's vfunc()
    p->vfunc();

    // Point to derived1 object
    p = &d1;

    // Access derived1's vfunc()
    p->vfunc();

    // Point to derived2 object
    p = &d2;

    // Access derived2's vfunc()
    p->vfunc();

    return 0;
}
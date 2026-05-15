// Program demonstrating Virtual Function in C++

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

// Derived class 1
class derived1 : public base {
public:

    // Overriding virtual function
    void vfunc() {
        cout << "This is derived1's vfunc().\n";
    }
};

// Derived class 2
class derived2 : public base {
public:

    // Overriding virtual function
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

    // Calls base class vfunc()
    p->vfunc();

    // Point to derived1 object
    p = &d1;

    // Calls derived1's vfunc()
    // because function is virtual
    p->vfunc();

    // Point to derived2 object
    p = &d2;

    // Calls derived2's vfunc()
    p->vfunc();

    return 0;
}
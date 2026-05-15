// This program uses virtual base classes
// to remove ambiguity in multiple inheritance.

#include <iostream>
using namespace std;

// Base class
class base {
public:
    int i;
};

// derived1 inherits base virtually
class derived1 : virtual public base {
public:
    int j;
};

// derived2 also inherits base virtually
class derived2 : virtual public base {
public:
    int k;
};

/*
derived3 inherits both derived1 and derived2.

Since base is inherited virtually,
only ONE copy of base class is created.

So there is no ambiguity while accessing i.
*/
class derived3 : public derived1, public derived2 {
public:
    int sum;
};

int main() {

    derived3 ob;

    // No ambiguity now
    ob.i = 10;

    // Assign values
    ob.j = 20;
    ob.k = 30;

    // Calculate sum
    ob.sum = ob.i + ob.j + ob.k;

    // Display values
    cout << ob.i << " ";
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;

    return 0;
}
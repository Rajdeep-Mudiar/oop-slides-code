// This program uses explicit scope resolution to remove ambiguity
// in multiple inheritance.

#include <iostream>
using namespace std;

// Base class
class base {
public:
    int i;
};

// derived1 inherits base
class derived1 : public base {
public:
    int j;
};

// derived2 also inherits base
class derived2 : public base {
public:
    int k;
};

/*
derived3 inherits both derived1 and derived2.
This creates TWO copies of base inside derived3:
1. One through derived1
2. One through derived2

So accessing i directly becomes ambiguous.
We solve it using scope resolution operator (::)
*/
class derived3 : public derived1, public derived2 {
public:
    int sum;
};

int main() {

    derived3 ob;

    // Scope resolved:
    // Use i from derived1's base class
    ob.derived1::i = 10;

    // Assign values
    ob.j = 20;
    ob.k = 30;

    // Calculate sum using scope resolution
    ob.sum = ob.derived1::i + ob.j + ob.k;

    // Display values
    cout << ob.derived1::i << " ";
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;

    return 0;
}
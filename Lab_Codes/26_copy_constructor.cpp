// Creates a new object as a copy of another object. 
 
// Q. Write a C++ program to demonstrate the use of a copy constructor by creating a class that copies the value of one object into another. 

#include <iostream> 
using namespace std; 
class Number { 
private: 
    int value; 
public: 
    Number(int v) { 
        value = v; 
    } 
    // Copy Constructor 
    Number(const Number &n) { 
        value = n.value; 
        cout << "Copy constructor called!" << endl; 
    } 
    void display() { 
        cout << "Value: " << value << endl; 
    } 
}; 
int main() { 
    Number n1(10); 
    Number n2 = n1;  // Copy constructor called 
n1.display(); 
n2.display(); 
return 0; 
}
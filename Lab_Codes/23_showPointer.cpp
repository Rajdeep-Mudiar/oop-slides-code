// Write a C ++ program to show this pointer
#include <iostream>

class MyClass {
private:
    int data;

public:
    // Constructor with a parameter named 'data'
    MyClass(int data) {
        // Use 'this->data' to refer to the class member variable
        // and 'data' to refer to the local parameter
        this->data = data;
    }

    // Member function to print the address of the current object
    void printAddress() const {
        std::cout << "Address of the current object (using 'this' pointer): " << this << std::endl;
    }

    // Member function to print the data member value
    void printData() const {
        std::cout << "Data value: " << this->data << std::endl;
    }

    // Method chaining example: returns a reference to the current object
    MyClass& setValue(int val) {
        this->data = val;
        return *this;
    }
};

int main() {
    // Create an object 'obj1'
    MyClass obj1(10);

    // Print the address of 'obj1' using the address-of operator
    std::cout << "Actual address of obj1 (&obj1): " << &obj1 << std::endl;

    // Call member function to show the 'this' pointer value
    obj1.printAddress();

    // Call member function to show the data value
    obj1.printData();

    // Example of method chaining using the 'this' pointer
    std::cout << std::endl << "Demonstrating method chaining:" << std::endl;
    MyClass obj2(5);
    obj2.setValue(20).printData(); // Chained calls, works because setValue returns *this

    return 0;
}

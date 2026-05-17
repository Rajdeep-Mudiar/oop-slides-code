// Multiple constructors with different parameters. 
// Q. Write a C++ program to demonstrate constructor overloading by creating a class with multiple constructors to initialize objects in different ways. 

#include <iostream> 
using namespace std; 
class Student { 
private: 
    string name; 
    int age; 
public: 
    Student() { 
        name = "Unknown"; 
        age = 0; 
    } 
    Student(string n) { 
        name = n; 
        age = 0; 
    } 
    Student(string n, int a) { 
        name = n; 
        age = a; 
    } 
    void display() { 
        cout << "Name: " << name << ", Age: " << age << endl; 
    } 
}; 
int main() { 
    Student s1; 
    Student s2("Rahul"); 
    Student s3("Amit", 20); 
    s1.display(); 
    s2.display(); 
    s3.display(); 
    return 0; 
}
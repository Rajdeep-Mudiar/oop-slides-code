// Pointer that stores address of a function. 
// Q. Write a C++ program to demonstrate the use of function pointers by assigning different functions to a pointer and calling them. 

#include <iostream> 
using namespace std; 
int add(int a, int b) { 
return a + b; 
} 
int multiply(int a, int b) { 
return a * b; 
} 
int main() { 
// Function pointer declaration 
int (*funcPtr)(int, int); 
funcPtr = add; 
cout << "Addition: " << funcPtr(3, 4) << endl; 
funcPtr = multiply; 
cout << "Multiplication: " << funcPtr(3, 4) << endl; 
return 0; 
}
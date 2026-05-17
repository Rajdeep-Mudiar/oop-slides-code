// Q. Write a C++ program to demonstrate function overloading by creating multiple functions with the 
// same name but different parameters to perform addition of numbers. 

#include <iostream> 
using namespace std; 
class Math { 
public: 
int add(int a, int b) { 
return a + b; 
} 
double add(double a, double b) { 
return a + b; 
} 
int add(int a, int b, int c) { 
return a + b + c; 
} 
}; 
int main() { 
Math m; 
cout << "Sum (int): " << m.add(2, 3) << endl; 
cout << "Sum (double): " << m.add(2.5, 3.5) << endl; 
cout << "Sum (3 ints): " << m.add(1, 2, 3) << endl; 
return 0; 
}
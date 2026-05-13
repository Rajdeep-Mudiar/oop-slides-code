#include<iostream>
using namespace std;

int main(){
    typedef int MyInt; // Define MyInt as an alias for int
    MyInt a = 10; // Now we can use MyInt instead of int
    cout << "Value of a: " << a << endl; // Output will be 10
    return 0;
}
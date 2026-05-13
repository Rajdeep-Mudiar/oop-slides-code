#include<iostream>
using namespace std;
int main(){
    int a=10, b=20, c=30;
    int result = (a, b, c); // The comma operator evaluates all expressions and returns the last one
    cout << "Result of (a, b, c): " << result << endl; // Output will be 30
    return 0;
}
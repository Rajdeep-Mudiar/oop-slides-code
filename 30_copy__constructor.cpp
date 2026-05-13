#include <iostream>
using namespace std;

class Student{
    public:
        int roll;
        string name;
};

int main(){
    Student s1;
    s1.roll=29;
    s1.name="Amit";

    Student s2=s1;
    cout<<"Roll of s2: "<<s2.roll<<endl;
    cout<<"Name of s2: "<<s2.name<<endl;
}
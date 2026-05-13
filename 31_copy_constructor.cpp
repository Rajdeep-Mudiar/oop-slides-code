#include<iostream>
using namespace std;

class Student{
    int roll;
    string name;

    public:
        Student(int r,string n){
            roll=r;
            name=n;
        }
        
        //Copy constructor
        Student(const Student &s){
            roll=s.roll;
            name="";
        }
};

int main(){
    Student s1(101,"Amit");
    Student s2=s1;
    return 0;
}
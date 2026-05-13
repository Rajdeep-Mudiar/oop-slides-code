#include<iostream>
using namespace std;

typedef struct {
    int id;
    string name;
} Student;
int main(){
    Student s1;
    s1.id = 1;
    s1.name = "Alice";
    cout << "Student ID: " << s1.id << ", Name: " << s1.name << endl;
    return 0;
}
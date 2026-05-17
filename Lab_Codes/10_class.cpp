#include <iostream>
using namespace std;

class Student{
public:
	string name;
	int age;
	
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age <<endl;
	
	}
};
int main(){
	Student s1;
	cout<<"Enter your name: ";
	string name;
	cin>>name;
	
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	s1.name=name;
	s1.age=age;
	s1.display();

	return 0;
}

// Write a  C++ program for storing data of one Employee( showing array of objects)

#include<iostream>
using namespace std;

class Employee
{
  int id;
  char name[30];

public:
  void getdata();
  void putdata();
};

void Employee::getdata()
{
  cout<<"Enter Id : ";
  cin>>id;

  cin.ignore(); // clears newline from buffer

  cout<<"Enter Name : ";
  cin.getline(name,30); // reads full name
}

void Employee::putdata()
{
  cout<<id<<" ";
  cout<<name<<" ";
  cout<<endl;
}

int main()
{
  Employee emp;
  emp.getdata();
  emp.putdata();
  return 0;
}

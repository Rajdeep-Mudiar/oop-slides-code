// Write a  C++ program for storing data of more than one Employee( showing array of objects)

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
  cout << "Enter Id : ";
  cin >> id;

  cin.ignore();   // clears leftover newline from buffer

  cout << "Enter Name : ";
  cin.getline(name,30);   // reads full name including spaces
}

void Employee::putdata()
{
  cout << id << " ";
  cout << name << endl;
}

int main()
{
  Employee emp[30];
  int n, i;

  cout << "Enter Number of Employees - ";
  cin >> n;

  for(i = 0; i < n; i++)
    emp[i].getdata();

  cout << "Employee Data - " << endl;

  for(i = 0; i < n; i++)
    emp[i].putdata();

  return 0;
}
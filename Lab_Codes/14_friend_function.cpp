
// WAP in C++ to show friend function

#include <iostream>
using namespace std;

class IT {
private:
    int students;

protected:
    int avg_marks;

public:
    IT() {
        students = 40;
        avg_marks = 60;
    }

    // friend class declaration
    friend class CSE;
};

// class CSE is declared as a friend
// inside class IT, therefore
// Class CSE can access private members
// of class IT.
class CSE {
public:
    void display(IT& t) {
        cout << "The no of Students in IT = "
             << t.students << endl;
        cout << "The average_marks of Students in IT = "
             << t.avg_marks;
    }
};

int main() {
    IT g;
    CSE fri;
    fri.display(g);
    return 0;
}
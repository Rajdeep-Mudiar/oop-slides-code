#include <iostream>
using namespace std;

class A {
protected:
    int age = 10;
};

class B : protected A {
public:
    int a;

    void show() {
        a = age;
        printf("%d\n", a);
    }
};

class C : protected B {
public:
    void display() {
        show();
    }
};

int main() {
    B obj;
    obj.show();

    printf("%d\n", obj.a);

    return 0;
}
#include <iostream>
using namespace std;

class A {
protected:
    int age = 10;
};

class B : public A {
public:
    void show() {
        printf("%d", age);
    }
};

class C:public B{
    public:
        void show(){
            printf("%d",age);
        }
}

int main() {
    B obj;
    obj.show();

    return 0;
}
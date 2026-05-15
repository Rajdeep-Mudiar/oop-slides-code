#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // pure virtual function
    virtual int getArea() = 0;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

protected:
    int width;
    int height;
};

// Derived classes
class Rectangle : public Shape {
public:
    int getArea() {
        return (width * height);
    }
};

class Triangle : public Shape {
public:
    int getArea() {
        return (width * height) / 2;
    }
};

int main(void) {

    Shape *s;
    Rectangle Rect;
    Triangle Tri;

    Rect.setWidth(5);
    Rect.setHeight(7);

    // Print the area of the object.
    s = &Rect;
    cout << "Total Rectangle area: " << s->getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.
    s = &Tri;
    cout << "Total Triangle area: " << s->getArea() << endl;

    return 0;
}
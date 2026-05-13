#include<iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    void set_values(int, int);
    int area();
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int Rectangle::area() {
    return width * height;
}

int main() {
    Rectangle rect,rect2;
    rect.set_values(5, 10);
    cout << "Area of rectangle: " << rect.area() << endl;
    
    rect2.set_values(7, 12);
    cout << "Area of rectangle 2: " << rect2.area() << endl;
    return 0;
}
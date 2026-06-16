// abstract_classes.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    float radius;

    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
public:
    float length, width;

    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    c.area();
    r.area();

    return 0;
}
// operator_overloading.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int l) {
        length = l;
    }

    Box operator+(Box b) {
        return Box(length + b.length);
    }

    void display() {
        cout << "Length: " << length << "cm" << endl;
    }
};

int main() {
    Box b1(10);
    Box b2(20);

    Box b3 = b1 + b2;  // Operator overloading

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
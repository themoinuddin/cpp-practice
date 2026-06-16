// multiple_inheritance.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Phone {
public:
    void call() {
        cout << "Making a call..." << endl;
    }
};

class Camera {
public:
    void capture() {
        cout << "Taking a photo..." << endl;
    }
};

class Smartphone : public Phone, public Camera {
public:
    void browse() {
        cout << "Browsing internet..." << endl;
    }
};

int main() {
    Smartphone s;
    s.call();     // From Phone
    s.capture();  // From Camera
    s.browse();   // Own method

    return 0;
}
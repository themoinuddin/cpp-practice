// constructors.cpp
// Author: Moin Uddin

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string color;
    int speed;

    // Constructor
    Car(string c, int s) {
        color = c;
        speed = s;
    }

    void drive() {
        cout << color << " car is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar("Red", 120);
    myCar.drive();

    Car yourCar("Blue", 80);
    yourCar.drive();

    return 0;
}
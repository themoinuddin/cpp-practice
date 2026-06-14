// classes.cpp
// Author: Moin Uddin

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string color;
    int speed;

    void drive() {
        cout << color << " car is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.color = "Red";
    myCar.speed = 120;
    myCar.drive();

    Car yourCar;
    yourCar.color = "Blue";
    yourCar.speed = 80;
    yourCar.drive();

    return 0;
}
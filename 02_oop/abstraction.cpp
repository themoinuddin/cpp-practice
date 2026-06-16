// abstraction.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Car {
private:
    void engineStart() {
        cout << "Engine started..." << endl;
    }

    void fuelCheck() {
        cout << "Fuel checked..." << endl;
    }

public:
    void drive() {
        // User sirf drive() call karta hai
        // Andar ki complexity chhupi hai
        engineStart();
        fuelCheck();
        cout << "Car is moving!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();  // User ko andar ki details nahi pata

    return 0;
}
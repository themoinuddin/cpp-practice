// inheritance.cpp
// Author: Moin Uddin

#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;

    void eat() {
        cout << name << " is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << name << " is barking!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.name = "Bruno";
    myDog.eat();   // Inherited from Animal
    myDog.bark();  // Dog's own method

    return 0;
}
// encapsulation.cpp
// Author: Moin Uddin

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.setName("Moin");
    s1.setAge(19);
    s1.display();

    return 0;
}
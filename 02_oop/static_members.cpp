// static_members.cpp
// Author: Moin Uddin

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    static string school;  // Shared by all objects

    Student(string n) {
        name = n;
    }

    void display() {
        cout << "Name: " << name << ", School: " << school << endl;
    }
};

string Student::school = "Zenith Learning Hub";

int main() {
    Student s1("Moin");
    Student s2("Ali");
    Student s3("Sara");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
// conditions.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Adult" << endl;
    } else if (age >= 13) {
        cout << "Teenager" << endl;
    } else {
        cout << "Child" << endl;
    }

    return 0;
}
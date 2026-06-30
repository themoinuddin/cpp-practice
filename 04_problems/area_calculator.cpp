// Author: Moin Uddin
// Description: Calculate area of different shapes (circle, rectangle, triangle)
// Example: Choice 1, radius 5 -> Area = 78.54

#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Choose shape: ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Area = " << PI * radius * radius << endl;
    }
    else if (choice == 2) {
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Area = " << length * width << endl;
    }
    else if (choice == 3) {
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        cout << "Area = " << 0.5 * base * height << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
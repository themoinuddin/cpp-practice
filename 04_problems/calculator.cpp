// Author: Moin Uddin
// Description: Simple calculator (add, subtract, multiply, divide)
// Example: 10 + 5 -> 15

#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter expression (e.g. 10 + 5): ";
    cin >> a >> op >> b;

    if (op == '+')
        cout << "Result = " << a + b << endl;
    else if (op == '-')
        cout << "Result = " << a - b << endl;
    else if (op == '*')
        cout << "Result = " << a * b << endl;
    else if (op == '/') {
        if (b == 0)
            cout << "Error: Division by zero!" << endl;
        else
            cout << "Result = " << a / b << endl;
    }
    else
        cout << "Invalid operator!" << endl;

    return 0;
}
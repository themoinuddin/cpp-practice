// function_overloading.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Int: " << add(2, 3) << endl;
    cout << "Float: " << add(2.5f, 3.5f) << endl;
    cout << "Three: " << add(2, 3, 4) << endl;

    return 0;
}
// pointers.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;

    cout << "Value: " << num << endl;
    cout << "Address: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl;

    return 0;
}
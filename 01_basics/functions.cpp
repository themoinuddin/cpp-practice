// functions.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello from a function!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    greet();
    
    int result = add(5, 3);
    cout << "5 + 3 = " << result << endl;
    
    return 0;
}
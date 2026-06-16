// recursion.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

void countdown(int n) {
    if (n == 0) {       // Base case
        cout << "Done!" << endl;
        return;
    }
    cout << n << endl;
    countdown(n - 1);   // Recursive call
}

int factorial(int n) {
    if (n == 1) return 1;   // Base case
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    countdown(5);

    cout << "Factorial of 5: " << factorial(5) << endl;

    return 0;
}
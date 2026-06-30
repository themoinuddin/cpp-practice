// Author: Moin Uddin
// Description: Check if a number is an Armstrong number
// Example: 153 -> 1^3 + 5^3 + 3^3 = 153 -> Armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, digits = 0;
    double result = 0.0;

    cout << "Enter a number: ";
    cin >> num;
    original = num;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)result == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
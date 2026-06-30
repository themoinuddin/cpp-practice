// Author: Moin Uddin
// Description: Calculate BMI and show health category
// Example: Weight 70kg, Height 1.75m -> BMI = 22.86 -> Normal

#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    bmi = weight / (height * height);
    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5)
        cout << "Category: Underweight" << endl;
    else if (bmi < 25)
        cout << "Category: Normal" << endl;
    else if (bmi < 30)
        cout << "Category: Overweight" << endl;
    else
        cout << "Category: Obese" << endl;

    return 0;
}
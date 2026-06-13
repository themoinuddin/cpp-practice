// strings.cpp
// Author: Moin Uddin

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Moin Uddin";

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "Uppercase first: " << (char)toupper(name[0]) << endl;
    cout << "Substring: " << name.substr(0, 4) << endl;

    return 0;
}
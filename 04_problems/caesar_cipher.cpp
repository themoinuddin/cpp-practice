// Author: Moin Uddin
// Description: Encrypt a string using Caesar Cipher
// Example: "hello", shift 3 -> "khoor"

#include <iostream>
#include <string>
using namespace std;

string caesarEncrypt(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isupper(c))
            result += char(int(c + shift - 'A') % 26 + 'A');
        else if (islower(c))
            result += char(int(c + shift - 'a') % 26 + 'a');
        else
            result += c;
    }
    return result;
}

int main() {
    string text;
    int shift;

    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter shift value: ";
    cin >> shift;

    string encrypted = caesarEncrypt(text, shift);
    cout << "Encrypted text: " << encrypted << endl;

    return 0;
}
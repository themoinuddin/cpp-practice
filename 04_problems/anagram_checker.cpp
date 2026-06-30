// Author: Moin Uddin
// Description: Check if two strings are anagrams of each other
// Example: "listen" and "silent" -> Anagrams

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAnagram(string a, string b) {
    if (a.length() != b.length()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (isAnagram(s1, s2))
        cout << s1 << " and " << s2 << " are anagrams." << endl;
    else
        cout << s1 << " and " << s2 << " are not anagrams." << endl;

    return 0;
}
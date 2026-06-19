// linear_search.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int target = 30;
    int size = 5;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
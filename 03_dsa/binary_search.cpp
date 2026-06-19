// binary_search.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int target = 40;

    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
// queue.cpp
// Author: Moin Uddin

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;

    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    cout << "Size: " << q.size() << endl;

    return 0;
}
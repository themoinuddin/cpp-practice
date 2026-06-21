// linked_list.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    // Create 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = nullptr;

    // Traverse the list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}
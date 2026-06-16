// destructor.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Room {
public:
    Room() {
        cout << "Entering room - lights on!" << endl;
    }

    ~Room() {
        cout << "Leaving room - lights off!" << endl;
    }
};

int main() {
    Room myRoom;  // Constructor call
    cout << "Inside the room..." << endl;
    // Destructor automatically call hoga yahan

    return 0;
}
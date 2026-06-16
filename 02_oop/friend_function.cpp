// friend_function.cpp
// Author: Moin Uddin

#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    friend void showMarks(Student s);  // Friend declaration
};

void showMarks(Student s) {
    // Private data access kar sakta hai
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student s1(95);
    showMarks(s1);

    return 0;
}
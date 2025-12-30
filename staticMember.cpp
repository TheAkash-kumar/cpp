#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    static int count;  // Declaration of static data member

    Student(int r) {
        rollNo = r;
        count++;  // har object ke liye static variable kop increment karna
    }

    void display() {
        cout << "Roll No: " << rollNo << " | Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1(101);
    Student s2(102);

    // object se access karna
    cout << "Accessing using object: " << s1.count << endl;

    // Access static data member using class name (recommended tarika yahi hai)
    cout << "Accessing using class name: " << Student::count << endl;

    return 0;
}

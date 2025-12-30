#include <iostream>
using namespace std;

class Test {
    int value;

public:
    // Constructor
    Test(int v) {
        if (v <= 0) {
            throw v;   // exception thrown from constructor
        }
        value = v;
        cout << "Constructor executed. Value = " << value << endl;
    }

    // Destructor
    ~Test() {
        cout << "Destructor executed." << endl;
    }
};

int main() {
    try {
        Test obj(0);   // invalid value, constructor throws exception
    }
    catch (int x) {
        cout << "Exception caught in main: Invalid value passed to constructor." << endl;
    }

    cout << "Program ended normally." << endl;
    return 0;
}

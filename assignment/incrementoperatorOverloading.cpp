#include <iostream>
using namespace std;

class Test {
    int x;

public:
   
    Test(int a = 0) {
        x = a;
    }

    // Prefix ++ : increment first, return new value
    Test operator++() {
        ++x;
        return *this;
    }

    // Postfix ++ : return old value, then increment
    Test operator++(int) {
        Test temp = *this;  // store old value
        x++;                // increment current object
        return temp;        // return old value
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Test obj(10), result;

    cout << "Initial value: ";
    obj.show();

    result = ++obj;
    cout << "After prefix ++obj:" << endl;
    cout << "obj = ";
    obj.show();
    cout << "result = ";
    result.show();

    result = obj++;
    cout << "After postfix obj++:" << endl;
    cout << "obj = ";
    obj.show();
    cout << "result = ";
    result.show();

    return 0;
}

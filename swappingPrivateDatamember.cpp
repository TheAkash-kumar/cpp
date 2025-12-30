#include <iostream>
using namespace std;

class B; 

class A {
private:
    int x;
public:
    void setData(int a) {
        x = a;
    }
    void show() {
        cout << "A: " << x << endl;
    }
    friend void swapData(A &, B &);
};

class B {
private:
    int y;
public:
    void setData(int b) {
        y = b;
    }
    void show() {
        cout << "B: " << y << endl;
    }
    friend void swapData(A &, B &);
};

void swapData(A &objA, B &objB) {
    int temp = objA.x;
    objA.x = objB.y;
    objB.y = temp;
}

int main() {
    A a;
    B b;
    a.setData(10);
    b.setData(20);

    cout << "Before Swapping:\n";
    a.show();
    b.show();

    swapData(a, b);

    cout << "\nAfter Swapping:\n";
    a.show();
    b.show();

    return 0;
}

#include <iostream>
using namespace std;

class c2;

class c1 {
private:
    int a;
public: 
    friend void findMax (c1, c2);
    void setData () {
        cout << "Enter an integer value : ";
        cin >> a;
    }
};

class c2 {
private:
    int a;
public: 
    friend void findMax (c1, c2);
    void setData () {
        cout << "Enter an integer value : ";
        cin >> a;
    }
};

void findMax (c1 obj1, c2 obj2) {
    if (obj1.a >> obj2.a) {
        cout << obj1.a << " is greater then " << obj2.a;
    } else {
        cout << obj2.a << " is greater then " << obj1.a;
    }
}
int main () {
    c1 obj1;
    c2 obj2;
    obj1.setData();
    obj2.setData();
    findMax (obj1, obj2);
    return 0;
}
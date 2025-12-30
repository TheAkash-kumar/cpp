#include <iostream>
using namespace std;

class base {
public:
    virtual void show () {
        cout << "This is base class show() function" << endl;
    }
};

class derived : public base {
public:
    void show () {
        cout << "This is derived class show() function" << endl;    
    }
};

int main () {
    base *baseptr;
    derived derivedobj;
    baseptr = &derivedobj;
    (*baseptr).show(); // This works same as baseptr->show(); 
    return 0;
}
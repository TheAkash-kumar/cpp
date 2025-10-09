#include <iostream>
using namespace std;

class base1 {
    int data1;
    public:
        base1(int i) {
            data1 = i;
            cout << "Base1 class constructor called" << endl;
        }
        void print1 () {
            cout << "value of data1 : " << data1 << endl;
        }
};

class base2 {
    int data2;
    public:
        base2(int i) {
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void print2 () {
            cout << "value of data1 : " << data2 << endl;
        }
};

class derived : public base2, public base1 {
    int data3;
    public:
        derived (int a, int b, int c) :base2(b), base1(a) {
            data3 = c;
            cout << "Derived class constructor called" << endl;
        }
        void print3 () {
            print1();
            print2();

            cout << "value of data1 : " << data3 << endl;
        }
};
int main () {
    base1 b1(5);
    b1.print1();

    base2 b2(10);
    b2.print2();

    derived d(2, 3, 1);
    d.print3();

    return 0;
}
#include <iostream>
using namespace std;

int main () {
    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl << ptr << endl;;
    delete ptr;
    int hex = 0x589;
    cout << int(hex) << endl << hex;
    return 0;
}
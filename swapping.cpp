#include <iostream>
using namespace std;
template <class t>
//template function for swapping two variable of any data type
void swapAnyData(t &x, t &y) {
    t temp = x;
    x = y; 
    y = temp;
    // x = x + y;
    // y = x - y;
    // x = x - y;
}
int main () {
    cout << "Swapping of char data type" << endl;
    char a = 'A';
    char b = 'B';
    cout << "before swapping a : " << a << " and b : " << b << endl; 
    swapAnyData(a, b);
    cout << "After swapping a : " << a << " and b : " << b << endl; 
    cout << endl;
    cout << "Swapping of int data type" << endl;
    int x = 12;
    int y = 10;
    cout << "before swapping a : " << x << " and b : " << y << endl; 
    swapAnyData(x, y);
    cout << "After swapping a : " << x << " and b : " << y << endl; 
    
    return 0;
}
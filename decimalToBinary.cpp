#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num, bn = 0;
    cout << "Enter the number : ";
    cin >> num;
    for (int i = 1; num > 0; i *= 10) {
        int rem = num % 2;
        bn += rem * i;
        num /= 2;
    }
    cout << bn;

    return 0;
}
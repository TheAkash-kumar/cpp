#include <iostream>
using namespace std;

template <typename T>
T product (T a, T b) { 
    return a * b;
}

int main() {
    cout <<"Product of " << 5 << " and " << 6 << " = " << product(5, 6) << endl;        
    cout <<"Product of " << 2.5 << " and " << 1.27 << " = " << product(2.5, 1.27) << endl;
    return 0;
}

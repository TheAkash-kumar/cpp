#include <iostream>
using namespace std;

void product(int x, int y) {
    cout << "product of " << x << " and " << y << " = " << x*y << endl;
}

void product(float x, float y) {
    cout << "product of " << x << " and " << y << " = " << x*y << endl;
}
// void product(int x, float y) {
//     cout << "product of " << x << " and " << y << " = " << x*y << endl;
// }
// void product(float x, int y) {
//     cout << "product of " << x << " and " << y << " = " << x*y << endl;
// }

int main () {
    product(4,5);
    product(4.5f,2.1f);
    // product(4.2f,1);
    // product (10,2.5f);
    return 0;
}
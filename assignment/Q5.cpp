#include <iostream>
using namespace std;
class number {
    int num;
public:
    number(int num = 0) {
        this->num = num;
    }
    void show () {
        cout << "number:" << num << endl;
    }
    operator int () {
        return num;
    }
};
int main () {
    number n(10),n2(15);
    n.show();
    int num = n;
    cout << "num = " << num << endl;
    cout << int(n2);

    return 0;
}
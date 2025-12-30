#include <iostream>
using namespace std;
class number2;
class number {
public:
    int num;
    number(int num = 0) {
        this->num = num;
    }
    number (number2);
    void show () {
        cout << "number:" << num << endl;
    }
};
class number2 {
public:
    int num;
    number2(int num = 0) {
        this->num = num;
    }
    number2(number obj) {
        this->num = obj.num;
    }
    void show () {
        cout << "number:" << num << endl;
    }
    
};
number::number (number2 obj) {
    this->num = obj.num;
}
int main () {
    number n = 10;
    number2 n2 = n;
    n.show();
    n2.show();

    return 0;
}
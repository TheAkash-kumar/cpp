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
};
int main () {
    number n(10);
    number n2 = 4;
    n.show();
    n2.show();
   
    

    return 0;
}
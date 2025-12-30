#include <iostream>
using namespace std;

class number {
        int x;
    public:
        number (int x = 0) {
            this->x = x;
        }
        void show () {
            cout << x << endl;
        }

        number operator ++ () {
            this->x = x + 1;
            return *this;
        }
        number operator ++ (int) {
            number temp = *this;
            this->x = x + 1;
            return temp;
        }
};

int main () {
    number n(20);
    (n++).show();   //20 print karega then increment kareke 21 kar dega
    n.show();
    (++n).show();   //phle 21 ko 22 kar dega tb print karega
    n.show();
    return 0;
}
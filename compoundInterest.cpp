#include <iostream>
using namespace std;

class interest {
    float p, r, t, amount;
    public:
        void getData () {
            cout << "Enter the value of principle:";
            cin >> p;
            cout << "Enter the value of rate(In percent):";
            cin >> r;
            cout << "Enter the value of time:";
            cin >> t;
            cout <<"hello";
        }
        void calcCI () {
            amount = p;
            for (int i = 1; i <= t; i++) {
                amount = amount + ((amount * r)/100);
            }
            cout << "compound interest = " << amount - p << " Amount = " << amount << endl;
        }
        void calcSI () {
            amount = p;
            amount = amount + (p * r * t)/100;
            cout << "Simple interest = " << amount - p << " Amount = " << amount;
        }
};
int main () {
    interest a;
    a.getData();
    a.calcCI();
    a.calcSI();
    return 0;
}
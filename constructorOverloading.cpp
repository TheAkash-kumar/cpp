#include <iostream>
using namespace std;

class bank {
    int p, t, r;
    float R,SimpleInterest;
    public: 
        bank() {};
        bank(int p, int r, int t) {
            this->p = p;
            this->r = r;
            this->t = t;
            SI ();
            cout << endl;
        }
        bank(int p, double R, int t) {
            this->p = p;
            this->R = R;
            this->t = t;
            si();
            cout << endl;
            
        }
        void SI () {
            SimpleInterest = (p * r * t)/100;
            cout << "simple interest = " << SimpleInterest;
        }
        void si () {
            SimpleInterest = (p * R * t);
            cout << "simple interest = " << SimpleInterest;
        }

        
};
int main (){
    bank b(1000, 10, 2);
    bank b2(1000, 0.10, 2);
   
    return 0;
}
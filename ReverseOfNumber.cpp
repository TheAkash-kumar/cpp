#include <iostream>
using namespace std;
class number {
    private:
        int num, n, rev = 0, rem;
       
    public:
        void getdata () {
            cout << "Enter number to reverse : ";
            cin >> num;
        }

        int reverse () {
            n = num;
            while (n > 0) {
                rem = n % 10;
                rev = rev * 10 + rem;
                n /= 10;
            }
            return rev;
        }
};

int main () {
    number n;
    n.getdata();
    
    cout << n.reverse() << endl;
    clog << "hello world!!!!!!!!!!!!!!!!!!!!!!!!!!";
    return 0;
}
#include <iostream>
using namespace std;

class solution {
    private:
        int num;
    public:
        void setdata () {
            cout <<"Enter number:";
            cin >> num; 
        } 
        void checkPrime () {
            for (int i =  2; i < num; i++) {
                if (num % i == 0) {
                    cout <<num <<" is not a prime number" <<endl;
                    return;
                }
               
            }
            cout <<num <<" is a prime number" <<endl;
        }
        void checkPalindrome () {
            int rev = 0, rem, n = num;
            while (n > 0) {
                rem = n % 10;
                rev = rev * 10 + rem;
                n /= 10;
            }
            num == rev ? cout << num << " is palindrome number" <<endl : cout << num << " not palindrome" <<endl;
        }   
};
int main () {
    solution number;
    number.setdata ();
    number.checkPalindrome ();
    number.checkPrime ();
    return 0;
}
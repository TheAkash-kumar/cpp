#include <iostream>
using namespace std;

class bank {

    int balance, acc_num;
    string name;
    
    public:
    bank(string name, int acc_num, int balance) {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
    }

    void deposite (int amt) {
        if (amt <= 0) {
            throw "Deposite amount must be greater than 0\n";
        } else if (amt > 0) {
            balance += amt;
            cout << "Dear Customer rs." << amt << " is credited to your account xxx" << acc_num << " remaing balance is " << balance << endl;
        }
    }

    void withdraw (int amt) {
        if (amt < 0) {
            throw "Withdrawing amount must be greater then 0\n";
        } else if (amt > balance) {
            throw "your Balance is low!";
        } else if (amt > 0 && amt <= balance) {
            balance -= amt;
            cout << "Dear Customer rs." << amt << " is debited from your account xxx" << acc_num << "remaing balance is " << balance << endl;
        }
    }
};
int main () {
    bank c1("Umesh Prasad",5666, 1250);
    try {
        c1.deposite(250);
        c1.withdraw(500);
        c1.deposite(0);
        c1.withdraw(120000);
    } catch (const char *str) {
        cout << "Exception occcured :" << str;
    }
    // try {
    //     c1.withdraw(120000);
    // } catch (const char *str) {
    //     cout << "Exception occcured :" << str;
    // }
    return 0;
}
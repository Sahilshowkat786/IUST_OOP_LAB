#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b = 0) { balance = b; }
};

class SavingsAccount : protected Account {
public:
    SavingsAccount(double b = 0) : Account(b) {}

    void deposit(double amt) {
        balance += amt;
        cout << "Deposited: " << amt << endl;
    }

    void withdraw(double amt) {
        if (amt > balance)
            cout << "Insufficient Balance!\n";
        else {
            balance -= amt;
            cout << "Withdrawn: " << amt << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    SavingsAccount s(500);
    s.deposit(200);
    s.withdraw(300);
    s.showBalance();
    return 0;
}
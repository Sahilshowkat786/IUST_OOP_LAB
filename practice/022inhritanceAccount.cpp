#include <iostream>
using namespace std;
class account
{
protected:
    double balance;

public:
    account() : balance(0) {}
};
class savingaccout : protected account
{
protected:
    double bal;

public:
    void deposit(double m)
    {
        balance += m;
        cout<<"deposited : "<<m<<endl;
    }
    void withdraw(double m)
    {
        if (m > balance)
        {
            cout << "insuffient balance ! ";
        }
        else
        {
            balance -= m;
            cout<<"withdraw : "<<m<<endl;
        }
    }
    void showbalance()
    {
        cout << "Balance in your account = " << balance;
    }
};
int main()
{
    savingaccout s;
    s.deposit(6200);
    s.withdraw(1400);
    s.showbalance();
}
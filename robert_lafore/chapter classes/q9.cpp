#include <iostream>
using namespace std;

class fraction
{
private:
    int num, den;   // num = numerator, den = denominator

public:
    void get()
    {
        char ch;
        cin >> num >> ch >> den;   // input like 2/3
    }

    void show()
    {
        cout << num << "/" << den;
    }

    fraction add(fraction m)
    {
        fraction r;
        r.num = num * m.den + m.num * den;
        r.den = den * m.den;
        return r;
    }
};

int main()
{
    fraction f1, f2, sum;

    cout << "Enter 1st fraction: ";
    f1.get();

    cout << "Enter 2nd fraction: ";
    f2.get();

    sum = f1.add(f2);

    cout << "Sum = ";
    sum.show();

    return 0;
}
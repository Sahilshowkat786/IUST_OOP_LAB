#include <iostream>
using namespace std;
class binary
{
private:
    long n;

public:
    void read()
    {
        cout << "Enter binary no = ";
        cin >> n;
    }
    int isbinary()
    {
        long num;
        while (n > 0)
        {
            num = n % 10;
            if (num != 0 && num != 1)
            {
                return 0;
                break;
            }
            n = n / 10;
        }
    }
};
int main()
{
    binary b;
    b.read();
    if (b.isbinary())
    {
        cout << "binary no ";
    }
    else
        cout << "not a binary no";
}
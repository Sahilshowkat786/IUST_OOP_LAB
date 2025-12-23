#include <iostream>
using namespace std;

class Time
{
private:
    int hrs, mins, secs;

public:
    Time()
    {
        hrs = mins = secs = 0;
    }

    Time(int h, int m, int s)
    {
        hrs = h;
        mins = m;
        secs = s;
    }

    void display()
    {
        cout << hrs << " : " << mins << " : " << secs << endl;
    }

    // Operator overloading for +
    Time operator+(Time t2)
    {
        Time t3;
        int s, m, h;

        s = secs + t2.secs;
        m = mins + t2.mins;
        h = hrs + t2.hrs;

        if (s >= 60)
        {
            m += s / 60;
            s = s % 60;
        }

        if (m >= 60)
        {
            h += m / 60;
            m = m % 60;
        }

        t3.hrs = h;
        t3.mins = m;
        t3.secs = s;

        return t3;
    }
};

int main()
{
    Time t1(2, 45, 50);
    Time t2(1, 30, 25);
    Time t3;

    t3 = t1 + t2;

    cout << "Time 1 = ";
    t1.display();

    cout << "Time 2 = ";
    t2.display();

    cout << "Sum = ";
    t3.display();

    return 0;
}
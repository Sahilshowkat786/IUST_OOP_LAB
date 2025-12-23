#include <iostream>
using namespace std;

class Time {
private:
    int hrs, mins, secs;

public:
    Time() {
        hrs = mins = secs = 0;
    }

    Time(int h, int m, int s) {
        hrs = h;
        mins = m;
        secs = s;
    }

    void display() {
        cout << hrs << " : " << mins << " : " << secs << endl;
    }

    long to_sec() {
        return hrs * 3600 + mins * 60 + secs;
    }

    static Time from_sec(long total) {
        Time t;
        t.hrs = total / 3600;
        total %= 3600;
        t.mins = total / 60;
        t.secs = total % 60;
        return t;
    }

    Time operator-(Time t) {
        long d = to_sec() - t.to_sec();
        if (d < 0)
            d = -d;
        return from_sec(d);
    }

    Time operator*(float f) {
        long x = (long)(to_sec() * f);
        return from_sec(x);
    }
};

int main() {
    Time t1(2, 20, 30);
    Time t2(2, 20, 20);

    Time diff = t1 - t2;
    Time mul = t1 * 2.5;

    cout << "Difference : ";
    diff.display();

    cout << "Multiplication : ";
    mul.display();

    return 0;
}

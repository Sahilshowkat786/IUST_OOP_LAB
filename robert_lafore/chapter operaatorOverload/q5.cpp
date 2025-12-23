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

    // Prefix ++
    Time operator++() {
        secs++;
        if (secs >= 60) {
            secs -= 60;
            mins++;
        }
        if (mins >= 60) {
            mins -= 60;
            hrs++;
        }
        return *this;
    }

    // Postfix ++
    Time operator++(int) {
        Time temp = *this;
        ++(*this);
        return temp;
    }

    // Prefix --
    Time operator--() {
        secs--;
        if (secs < 0) {
            secs += 60;
            mins--;
        }
        if (mins < 0) {
            mins += 60;
            hrs--;
        }
        return *this;
    }

    // Postfix --
    Time operator--(int) {
        Time temp = *this;
        --(*this);
        return temp;
    }
};

int main() {
    Time t1(12, 16, 43);

    t1++;
    t1.display();

    return 0;
}

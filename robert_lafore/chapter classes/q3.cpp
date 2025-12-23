#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    // Default constructor
    Time() : hr(0), min(0), sec(0) {}

    // Parameterized constructor
    Time(int h, int m, int s) : hr(h), min(m), sec(s) {}

    // Display function
    void display() const
    {
        cout << hr << ":" << min << ":" << sec << endl;
    }

    // Add two time objects
    void add(Time t1, Time t2)
    {
        sec = t1.sec + t2.sec;
        min = t1.min + t2.min + sec / 60;
        sec = sec % 60;

        hr = t1.hr + t2.hr + min / 60;
        min = min % 60;
    }
};

int main()
{
    Time t1(2, 21, 44);
    Time t2(10, 12, 16);
    Time t3;

    t3.add(t1, t2);
    t3.display();

    return 0;
}
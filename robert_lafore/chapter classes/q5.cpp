#include <iostream>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    void getdata()
    {
        char ch1, ch2;
        cout << "Enter date (dd-mm-yy): ";
        cin >> day >> ch1 >> month >> ch2 >> year;
    }

    void displaydata() const
    {
        cout << day << "-" << month << "-" << year;
    }
};

int main()
{
    date d1;

    d1.getdata();

    cout << "Date = ";
    d1.displaydata();

    return 0;
}
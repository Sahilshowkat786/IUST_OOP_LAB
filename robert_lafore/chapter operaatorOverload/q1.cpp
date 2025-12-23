#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }

    // Operator overloading for subtraction
    Distance operator-(Distance d)
    {
        Distance temp;
        temp.feet = feet - d.feet;
        temp.inches = inches - d.inches;

        if (temp.inches < 0)
        {
            temp.inches += 12.0;
            temp.feet--;
        }
        return temp;
    }

    void show()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    Distance d1(5, 8.0), d2(3, 10.0), d3;

    d3 = d1 - d2;

    cout << "Result = ";
    d3.show();

    return 0;
}
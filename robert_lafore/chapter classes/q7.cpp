#include <iostream>
using namespace std;

class angle
{
private:
    int degree;
    float min;
    char dir;

public:
    // Parameterized constructor
    angle(int d, float m, char di)
    {
        degree = d;
        min = m;
        dir = di;
    }

    // Default constructor
    angle()
    {
        degree = 0;
        min = 0;
        dir = 'E';
    }

    void get()
    {
        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter direction (N/E/S/W): ";
        cin >> dir;
    }

    void display() const
    {
        cout << degree << "° " << min << "' " << dir << endl;
    }
};

int main()
{
    angle a(129, 41.5, 'N');
    cout << "Constructor angle = ";
    a.display();

    angle user;
    cout << "\nEnter new angle:\n";
    user.get();

    cout << "You entered = ";
    user.display();

    return 0;
}
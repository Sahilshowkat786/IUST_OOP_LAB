#include <iostream>
using namespace std;

class Angle
{
public:
    int deg;
    float min;
    char dir;

    void get()
    {
        cout << "Enter degree: ";
        cin >> deg;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter direction (N/S/E/W): ";
        cin >> dir;
    }

    void show()
    {
        cout << deg << "° " << min << "' " << dir;
    }
};

class Ship
{
private:
    static int count;
    int serial;
    Angle lat, lon;   // objects of Angle class

public:
    Ship()
    {
        serial = ++count;
    }

    void getPosition()
    {
        cout << "\nEnter latitude:\n";
        lat.get();

        cout << "Enter longitude:\n";
        lon.get();
    }

    void show()
    {
        cout << "\nShip no: " << serial;
        cout << "\nLatitude: ";
        lat.show();
        cout << "\nLongitude: ";
        lon.show();
        cout << endl;
    }
};

int Ship::count = 0;

int main()
{
    Ship s1, s2, s3;

    s1.getPosition();
    s2.getPosition();
    s3.getPosition();

    s1.show();
    s2.show();
    s3.show();

    return 0;
}
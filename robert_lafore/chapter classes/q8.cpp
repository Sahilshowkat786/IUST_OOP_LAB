#include <iostream>
using namespace std;

class counter
{
private:
    static int count;   // shared by all objects
    int serial;

public:
    counter()
    {
        serial = ++count;
    }

    void show() const
    {
        cout << "I am object number " << serial << endl;
    }
};

// definition of static data member
int counter::count = 0;

int main()
{
    counter a, b, c;

    a.show();
    b.show();
    c.show();

    return 0;
}
#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor Called\n"; }
    ~Base() { cout << "Base Destructor Called\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor Called\n"; }
    ~Derived() { cout << "Derived Destructor Called\n"; }
};

int main() {
    Derived d;
    return 0;
}
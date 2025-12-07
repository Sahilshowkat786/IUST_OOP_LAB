#include <iostream>
using namespace std;

class Temperature {
public:
    void ctof(float c) {
        cout << "Fahrenheit = " << (c * 9/5) + 32 << endl;
    }

    void ftoc(float f) {
        cout << "Celsius = " << (f - 32) * 5/9 << endl;
    }
};

int main() {
    Temperature t;
    t.ctof(25);
    t.ftoc(98.6);
}

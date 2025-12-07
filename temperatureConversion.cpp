#include <iostream>
using namespace std;

class Temperature {
private:
    float c;

public:
    Temperature(float x) { c = x; }

    void convert() {
        cout << "Celsius = " << c << endl;
        cout << "Fahrenheit = " << (c * 9/5) + 32 << endl;
    }
};

int main() {
    Temperature t(25);
    t.convert();
}
#include <iostream>
using namespace std;

class Interest {
private:
    float p, r, t;

public:
    Interest(float a, float b, float c) {
        p = a; r = b; t = c;
    }

    void calculate() {
        cout << "Simple Interest = " << (p * r * t) / 100 << endl;
    }
};

int main() {
    Interest I(1000, 5, 2);
    I.calculate();
}

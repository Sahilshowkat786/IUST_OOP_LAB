#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest {
private:
    float p, r, t;
    int n;

public:
    CompoundInterest(float a, float b, float c, int d = 1) {
        p = a; r = b; t = c; n = d;
    }

    void calc() {
        float A = p * pow((1 + r/n), n*t);
        cout << "Amount = " << A << endl;
        cout << "Compound Interest = " << A - p << endl;
    }
};

int main() {
    CompoundInterest C(1000, 0.05, 2);
    C.calc();
}
#include <iostream>
using namespace std;

class Bill {
private:
    int units;

public:
    Bill(int u) { units = u; }          // parameterized
    Bill(Bill &b) { units = b.units; }  // copy constructor

    void calc() {
        cout << "Total Bill = " << units * 5 << endl;
    }
};

int main() {
    Bill b1(100);
    Bill b2(b1);

    b1.calc();
    b2.calc();
}
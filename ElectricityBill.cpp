#include <iostream>
using namespace std;

class ElectricityBill {
private:
    string name;
    int units;
    float charge;

public:
    void get() {
        cin >> name >> units >> charge;
    }

    void bill() {
        cout << "Total Bill = " << units * charge << endl;
    }
};

int main() {
    ElectricityBill e;
    e.get();
    e.bill();
}

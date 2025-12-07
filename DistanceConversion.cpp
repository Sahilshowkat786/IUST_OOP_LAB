#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    void get() {
        cin >> meters;
    }

    void convert() {
        cout << "Kilometers = " << meters / 1000 << endl;
        cout << "Centimeters = " << meters * 100 << endl;
        cout << "Millimeters = " << meters * 1000 << endl;
    }
};

int main() {
    Distance d;
    d.get();
    d.convert();
}

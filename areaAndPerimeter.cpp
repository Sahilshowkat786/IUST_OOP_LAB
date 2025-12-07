#include <iostream>
using namespace std;

class Rectangle {
private:
    float l, w;

public:
    Rectangle(float x, float y) { l = x; w = y; }     // both
    Rectangle(float x) { l = w = x; }                // square

    void calc() {
        cout << "Area = " << l * w << endl;
        cout << "Perimeter = " << 2 * (l + w) << endl << endl;
    }
};

int main() {
    Rectangle r1(5, 3);
    Rectangle r2(4);

    r1.calc();
    r2.calc();
}
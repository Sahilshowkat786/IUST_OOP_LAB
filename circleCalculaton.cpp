#include <iostream>
using namespace std;

class Circle {
    float radius;
public:
    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float area() { return 3.1416 * radius * radius; }
    float circumference() { return 2 * 3.1416 * radius; }

    void display() {
        cout << "Area = " << area() << endl;
        cout << "Circumference = " << circumference() << endl;
    }
};

int main() {
    Circle c;
    c.input();
    c.display();
    return 0;
}

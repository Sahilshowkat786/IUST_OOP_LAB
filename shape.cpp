#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area function in base class.\n";
    }
};

class Circle : public Shape {
    float r;
public:
    void get() { cout << "Enter radius: "; cin >> r; }
    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    float l, b;
public:
    void get() { cout << "Enter length & breadth: "; cin >> l >> b; }
    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape {
    float b, h;
public:
    void get() { cout << "Enter base & height: "; cin >> b >> h; }
    void area() {
        cout << "Area of Triangle = " << 0.5 * b * h << endl;
    }
};

int main() {
    Circle c; Rectangle r; Triangle t;

    c.get(); c.area();
    r.get(); r.area();
    t.get(); t.area();

    return 0;
}

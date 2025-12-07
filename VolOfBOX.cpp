#include <iostream>
using namespace std;

class Box {
private:
    float l, w, h;

public:
    void get() {
        cin >> l >> w >> h;
    }

    void volume() {
        cout << "Volume = " << l * w * h << endl;
    }
};

int main() {
    Box b;
    b.get();
    b.volume();
}

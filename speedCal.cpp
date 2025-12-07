#include <iostream>
using namespace std;

class Speed {
private:
    float d, t;

public:
    Speed(float x, float y) {
        d = x; t = y;
    }

    void calc() {
        cout << "Speed = " << d / t << " km/hr" << endl;
    }
};

int main() {
    Speed s(150, 3);
    s.calc();
}
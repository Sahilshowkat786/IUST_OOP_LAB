#include <iostream>
using namespace std;

class Average {
private:
    int a, b, c;

public:
    void get() {
        cin >> a >> b >> c;
    }

    void avg() {
        cout << "Average = " << (a + b + c) / 3.0 << endl;
    }
};

int main() {
    Average A;
    A.get();
    A.avg();
}

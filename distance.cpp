#include <iostream>
using namespace std;

class Distance {
private:
    int m, cm;

public:
    Distance(int x) { m = x; cm = 0; }
    Distance(int x, int y) { m = x; cm = y; }

    Distance add(Distance d) {
        Distance temp(0, 0);
        temp.m = m + d.m;
        temp.cm = cm + d.cm;

        if(temp.cm >= 100) {
            temp.m++;
            temp.cm -= 100;
        }
        return temp;
    }

    void show() {
        cout << m << " m " << cm << " cm" << endl;
    }
};

int main() {
    Distance d1(5, 80), d2(3, 50);
    Distance d3 = d1.add(d2);
    d3.show();
}
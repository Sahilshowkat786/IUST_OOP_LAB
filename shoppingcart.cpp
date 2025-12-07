#include <iostream>
using namespace std;

class Item {
private:
    float *price;
    int *qty;

public:
    Item(float p, int q) {
        price = new float(p);
        qty = new int(q);
    }

    void total() {
        cout << "Total Cost = " << (*price) * (*qty) << endl;
    }

    ~Item() {
        delete price;
        delete qty;
    }
};

int main() {
    Item i(50.5, 3);
    i.total();
}
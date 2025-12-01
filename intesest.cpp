#include <iostream>
using namespace std;

class Interest {
    float principal, rate, time;
public:
    void input() {
        cout << "Enter Principal, Rate, Time: ";
        cin >> principal >> rate >> time;
    }

    float simpleInterest() {
        return (principal * rate * time) / 100;
    }

    void display() {
        cout << "Simple Interest = " << simpleInterest() << endl;
    }
};

int main() {
    Interest i;
    i.input();
    i.display();
    return 0;
}

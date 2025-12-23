#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalCars;
    double totalCash;

public:
    // Constructor
    TollBooth() : totalCars(0), totalCash(0.0) {}

    // Paying car (pays toll)
    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
    }

    // Non-paying car
    void nonPayingCar()
    {
        totalCars++;
    }

    // Display result
    void display() const
    {
        cout << "Total cars passed = " << totalCars << endl;
        cout << "Total cash collected = " << totalCash << endl;
    }
};

int main()
{
    TollBooth booth;

    booth.payingCar();
    booth.payingCar();
    booth.nonPayingCar();
    booth.payingCar();

    booth.display();

    return 0;
}

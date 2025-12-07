#include <iostream>
using namespace std;

class BMI {
private:
    float w, h;

public:
    BMI(float weight, float height) {
        w = weight;
        h = height;
    }

    void calc() {
        float bmi = w / (h * h);
        cout << "BMI = " << bmi << endl;

        if(bmi < 18.5) cout << "Underweight";
        else if(bmi < 25) cout << "Normal";
        else cout << "Overweight";
    }
};

int main() {
    BMI b(70, 1.75);
    b.calc();
}
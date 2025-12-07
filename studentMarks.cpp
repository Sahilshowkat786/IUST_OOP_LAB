#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void getStudent() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
    }
};

class Marks : public Student {
    float m1, m2, m3;
    float total, percent;
public:
    void getMarks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        percent = total / 3.0;
    }

    void display() {
        cout << "\n--- Student Academic Report ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percent << "%\n";
    }
};

int main() {
    Marks m;
    m.getStudent();
    m.getMarks();
    m.calculate();
    m.display();
    return 0;
}
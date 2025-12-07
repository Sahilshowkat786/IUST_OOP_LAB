#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Student : public Person {
protected:
    int roll;
public:
    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> roll;
    }
};

class Result : public Student {
    int m1, m2, m3;
public:
    void getMarks() {
        cout << "Enter Marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void display() {
        int total = m1 + m2 + m3;
        float per = total / 3.0;

        cout << "\n----- FULL PERFORMANCE SUMMARY -----\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << per << "%\n";
    }
};

int main() {
    Result r;
    r.getPerson();
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}
#include <iostream>
using namespace std;

class Teacher {
protected:
    string tname;
    string subject;
public:
    void getTeacher() {
        cout << "Enter Teacher Name: ";
        cin >> tname;
        cout << "Enter Subject: ";
        cin >> subject;
    }
};

class Researcher {
protected:
    string field;
    int papers;
public:
    void getResearch() {
        cout << "Enter Research Field: ";
        cin >> field;
        cout << "Enter No. of Published Papers: ";
        cin >> papers;
    }
};

class Faculty : public Teacher, public Researcher {
public:
    void display() {
        cout << "\n----- Faculty Profile -----\n";
        cout << "Teacher Name: " << tname << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Field: " << field << endl;
        cout << "Published Papers: " << papers << endl;
    }
};

int main() {
    Faculty f;
    f.getTeacher();
    f.getResearch();
    f.display();
    return 0;
}
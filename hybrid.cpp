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

class Sports : virtual public Student {
protected:
    int sportsScore;
public:
    void getSports() {
        cout << "Enter Sports Score (0-50): ";
        cin >> sportsScore;
    }
};

class Academics : virtual public Student {
protected:
    int academicScore;
public:
    void getAcademics() {
        cout << "Enter Academic Score (0-100): ";
        cin >> academicScore;
    }
};

class Result : public Sports, public Academics {
public:
    void display() {
        int finalScore = sportsScore + academicScore;
        cout << "\n------ Final Student Performance ------\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Academic Score: " << academicScore << endl;
        cout << "Final Combined Score: " << finalScore << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getSports();
    r.getAcademics();
    r.display();
    return 0;
}
#include <iostream>
using namespace std;

class Marks {
private:
    int m[5];

public:
    void get() {
        for(int i=0; i<5; i++)
            cin >> m[i];
    }

    void calc() {
        int total = 0;
        for(int i=0; i<5; i++)
            total += m[i];

        float per = total / 5.0;
        cout << "Total = " << total << endl;
        cout << "Percentage = " << per << endl;

        if(per >= 90) cout << "Grade A";
        else if(per >= 75) cout << "Grade B";
        else if(per >= 60) cout << "Grade C";
        else cout << "Grade D";
    }
};

int main() {
    Marks m;
    m.get();
    m.calc();
}

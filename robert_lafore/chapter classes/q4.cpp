#include <iostream>
using namespace std;

class employee
{
private:
    int employee_no;
    float salary;

public:
    void getdata()
    {
        cout << "Enter employee number: ";
        cin >> employee_no;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void putdata() const
    {
        cout << "Emp no = " << employee_no << endl;
        cout << "Emp salary = " << salary << endl;
    }
};

int main()
{
    employee e[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of employee " << i + 1 << endl;
        e[i].getdata();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < 3; i++)
    {
        e[i].putdata();
        cout << endl;
    }

    return 0;
}
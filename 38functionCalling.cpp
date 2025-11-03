#include <iostream>
using namespace std;
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapRefrence(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swapPointers(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    cout << "before swaping x = " << x << " and y = " << y << endl;
    swapValue(x, y);
    cout << "after swaping by value x = " << x << " and y = " << y << endl;
    // call by reference
    swapRefrence(x, y);
    cout << "after swaping by refrence x = " << x << " and y = " << y << endl;
    // call by pointers
    cout << "value of x and y are at this time = " << x << " " << y << endl;

    int *n = &x;
    int *m = &y;

    swapPointers(n, m);
    cout << "after swaping by pointers x = " << x << " and y = " << y << endl;
}

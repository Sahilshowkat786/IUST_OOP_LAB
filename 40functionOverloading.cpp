#include <iostream>
#include <string>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
string sum(string a, string b)

{ 
    return a + b;
}
int main()
{
    int n, m, o;
    cout << "Enter three numbers = ";
    cin >> n >> m >> o;
    cout << "sum of two = " << sum(n, m)<<endl;
    // sum of three
    cout << "sum of three = "<<sum(n,m,o)<<endl;
    // sum of strings
    cout<<sum(string ("sahil"),string ("showkat"));
    
}

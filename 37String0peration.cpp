#include <iostream>
#include <string>
using namespace std;
// 1_length of string
int length0fstring(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
// 2_reverse of string
void reversestring(char str[])
{
    cout << "Reverse of a string = ";
    int len = length0fstring(str);
    for (int i = len; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
}
//3_ substring
void substring(char str[])
{
    cout << "-----substring-----" << endl;
    int start, end;
    cout << "Enter starting(0-n) and ending(0-n) = ";
    cin >> start >> end;
    cout << "substring = " ;
    for (int i = start; i <= end; i++)
    {
        cout << str[i];
    }
    cout << endl;
}
//4_ concatenation
void concateString()
{
    cout << "----concatenation-----" << endl;
    char str1[20];
    char str2[20];
    cout << "Enter string 1 = ";
    cin >> str1;
    cout << "Enter string 2 = ";
    cin >> str2;
    cout <<"AFTER CONCATENATION = "<< str1 << str2 << endl;
}

//5_ frequency
void frequency(char str[])
{
    cout<<"-----Frequency-----"<<endl;
    char a;
    cout << "Enter character to find frequency = ";
    cin >> a;
    int i = 0;
    int count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
        {
            count++;
        }
        i++;
    }
    cout << "Frequency of " << a << " =  " << count << endl;
}

int main()
{
    char str[30];
    int start, end;
    cout << "Enter string = ";
    cin >> str;
   // reversestring(str);

  //  cout << "Length of sting is = " << length0fstring(str) << endl;

   // substring(str);
    concateString();
   // frequency(str);
}
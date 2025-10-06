#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    char choice;
    do
    {
        cout << "Logic Gate Simulator\n";
        cout << "1. OR gate\n";
        cout << "2. AND gate\n";
        cout << "3. NOT gate\n";
        cout << "4. XOR gate\n";
        cout << "5. Exit program\n";
        cout << "Choose option: ";
        cin >> choice;

        if (choice == '5')
        {
            cout << "Exiting program...\n";
            return 0;
        }

        if (choice == '3')
        {
            cout << "Enter input x = "<<endl;
            cin >> n1;
        }
        else
        {
            cout << "Enter input x and y = ";
            cin >> n1 >> n2;
        }

        switch (choice)
        {
        case '1': // OR gate
            cout << "Output is " << (n1 || n2)<<endl;
            break;
        case '2': // AND gate
            cout << "Output is " << (n1 && n2)<<endl;
            break;
        case '3': // NOT gate
            cout << "Output is " << (!n1)<<endl;
            break;
        case '4': // XOR gate
            cout << "Output is " << (n1 ^ n2)<<endl;
            break;
        default:
            cout << "Enter a valid option!"<<endl;
        }

    } while (choice != '5');
}

#include<iostream>
#include<string>
using namespace std;

class publication {
public:
    string title;
    float price;

    void getdata() {

        cin.ignore();                     // clear leftover newline
        cout << "Enter the title: ";
        getline(cin, title);

        cout << "Enter the price: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class sales {
public:
    float salesArr[3];

    void getdata() {
        cout << "Enter sales of past 3 months: ";
        for (int i = 0; i < 3; i++) {
            cin >> salesArr[i];
        }
    }

    void putdata() {
        cout << "Sales of past 3 months: ";
        for (int i = 0; i < 3; i++) {
            cout << salesArr[i] << " ";
        }
        cout << endl;
    }
};

class book : public publication, public sales {
public:
    int count;

    void getdata() {
        publication::getdata();
        sales::getdata();
        cout << "Enter page count: ";
        cin >> count;
    }

    void putdata() {
        publication::putdata();
        sales::putdata();
        cout << "Pages: " << count << endl;
    }
};

class tape : public publication, public sales {
public:
    float playtime;

    void getdata() {
        cin.ignore();                      // REMOVE leftover newline from book section
        publication::getdata();
        sales::getdata();
        cout << "Enter playtime (minutes): ";
        cin >> playtime;
    }

    void putdata() {
        publication::putdata();
        sales::putdata();
        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};

int main() {
    book a;
    cout << "\nBook Input :-\n";
    a.getdata();
    a.putdata();

    tape b;
    cout << "\nTape Input :-\n";
    b.getdata();
    b.putdata();

    return 0;
}

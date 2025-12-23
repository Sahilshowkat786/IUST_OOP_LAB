#include<iostream>
#include<string>
using namespace std;

class publication {
public:
    string title;
    float price;

    void getdata() {
        //cin.ignore();                      // clear leftover newline
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

class book : public publication {
public:
    int count;

    void getdata() {
        publication::getdata();
        cout << "Enter page count: ";
        cin >> count;
    }

    void putdata() {
        publication::putdata();
        cout << "Pages: " << count << endl;
    }
};

class tape : public publication {
public:
    float playtime;

    void getdata() {
        publication::getdata();
        cout << "Enter playtime (minutes): ";
        cin >> playtime;
    }

    void putdata() {
        publication::putdata();
        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};

int main() {
    book a;
    cout << "\n--- Book Input ---\n";
    a.getdata();
    a.putdata();

    tape b;
    cout << "\n--- Tape Input ---\n";
    b.getdata();
    b.putdata();

    return 0;
}

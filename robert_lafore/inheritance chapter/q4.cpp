#include <iostream>
#include <string>
using namespace std;

// -------------------------
// Base Class
// -------------------------
class publication {
protected:
    string title;
    float price;

public:
    void getdata() {
        cout << "Enter title: ";
        getline(cin, title);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore();  // Clear newline
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// -------------------------
// Derived Class: Book
// -------------------------
class book : public publication {
private:
    int page_count;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        cin.ignore();
    }

    void putdata() {
        publication::putdata();
        cout << "Page Count: " << page_count << endl;
    }
};

// -------------------------
// Derived Class: Tape
// -------------------------
class tape : public publication {
private:
    float playing_time;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playing_time;
        cin.ignore();
    }

    void putdata() {
        publication::putdata();
        cout << "Playing Time: " << playing_time << " minutes" << endl;
    }
};

// -------------------------
// Derived Class: Disk
// -------------------------
class disk : public publication {
public:
    enum dtype { CD, DVD };
private:
    dtype type;

public:
    void getdata() {
        publication::getdata();

        char ch;
        cout << "Enter disk type (c = CD, d = DVD): ";
        cin >> ch;
        cin.ignore();

        if (ch == 'c' || ch == 'C')
            type = CD;
        else
            type = DVD;
    }

    void putdata() {
        publication::putdata();
        cout << "Disk Type: " << (type == CD ? "CD" : "DVD") << endl;
    }
};

// -------------------------
// MAIN FUNCTION
// -------------------------
int main() {
    book b;
    tape t;
    disk d;

    cout << "\nEnter book details:\n";
    b.getdata();

    cout << "\nEnter tape details:\n";
    t.getdata();

    cout << "\nEnter disk details:\n";
    d.getdata();

    cout << "\n--- Book Details ---\n";
    b.putdata();

    cout << "\n--- Tape Details ---\n";
    t.putdata();

    cout << "\n--- Disk Details ---\n";
    d.putdata();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// -------------------------
// DATE CLASS (from Chapter 6)
// -------------------------
class date {
public:
    int day, month, year;

    void getdate() {
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter year: ";
        cin >> year;
    }

    void putdate() const {
        cout << month << "/" << day << "/" << year;
    }
};

// -------------------------
// BASE CLASS: publication
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
        cin.ignore();     // clear newline
    }

    void putdata() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

// -------------------------
// DERIVED CLASS: publication2
// adds publication date
// -------------------------
class publication2 : public publication {
protected:
    date pub_date;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter publication date:\n";
        pub_date.getdate();
        cin.ignore();
    }

    void putdata() const {
        publication::putdata();
        cout << "Publication Date: ";
        pub_date.putdate();
        cout << endl;
    }
};

// -------------------------
// Derived Class: Book
// -------------------------
class book : public publication2 {
private:
    int page_count;

public:
    void getdata() {
        publication2::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        cin.ignore();
    }

    void putdata() const {
        publication2::putdata();
        cout << "Page Count: " << page_count << endl;
    }
};

// -------------------------
// Derived Class: Tape
// -------------------------
class tape : public publication2 {
private:
    float playing_time;

public:
    void getdata() {
        publication2::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playing_time;
        cin.ignore();
    }

    void putdata() const {
        publication2::putdata();
        cout << "Playing Time: " << playing_time << " minutes" << endl;
    }
};

// -------------------------
// MAIN FUNCTION
// -------------------------
int main() {
    book b;
    tape t;

    cout << "\nEnter book details:\n";
    b.getdata();

    cout << "\nEnter tape details:\n";
    t.getdata();

    cout << "\n--- Book Details ---\n";
    b.putdata();

    cout << "\n--- Tape Details ---\n";
    t.putdata();

    return 0;
}

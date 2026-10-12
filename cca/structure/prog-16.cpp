#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[30];
    float price;
};

int main() {
    Book b;

    cout << "Enter book ID: ";
    cin >> b.id;

    cout << "Enter book title (one word): ";
    cin >> b.title;

    cout << "Enter book price: ";
    cin >> b.price;

    cout << "\nBook Details\n";
    cout << "ID: " << b.id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Price: " << b.price;

    return 0;
}
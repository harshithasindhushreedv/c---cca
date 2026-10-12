#include <iostream>
using namespace std;

union Product {
    int id;
    float price;
    int quantity;
};

int main() {
    Product p;
    int ch;

    cout << "1.ID 2.Price 3.Quantity\n";
    cin >> ch;

    if (ch == 1) {
        cin >> p.id;
        cout << "Product ID: " << p.id;
    }
    else if (ch == 2) {
        cin >> p.price;
        cout << "Price: " << p.price;
    }
    else if (ch == 3) {
        cin >> p.quantity;
        cout << "Quantity: " << p.quantity;
    }
    else
        cout << "Invalid choice";

    return 0;
}
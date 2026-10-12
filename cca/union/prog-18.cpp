#include <iostream>
using namespace std;

union Vehicle {
    int number;
    int type;
};

int main() {
    Vehicle v;
    int ch;

    cout << "1. Registration Number\n";
    cout << "2. Vehicle Type (1-Car, 2-Bike)\n";
    cin >> ch;

    if (ch == 1) {
        cout << "Enter number: ";
        cin >> v.number;
        cout << v.number;
    }
    else if (ch == 2) {
        cout << "Enter type: ";
        cin >> v.type;
        cout << "Type: " << v.type;
    }
    else
        cout << "Invalid choice";

    return 0;
}
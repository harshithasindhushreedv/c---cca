#include <iostream>
using namespace std;

union Account {
    int number;
    float balance;
};

int main() {
    Account a;
    int ch;

    cout << "1.Account Number\n";
    cout << "2.Account Balance\n";
    cin >> ch;

    if (ch == 1) {
        cout << "Enter number: ";
        cin >> a.number;
        cout << a.number;
    }
    else if (ch == 2) {
        cout << "Enter balance: ";
        cin >> a.balance;
        cout << a.balance;
    }
    else
        cout << "Invalid choice";

    return 0;
}
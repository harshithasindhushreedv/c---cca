#include <iostream>
using namespace std;

int main() {
    int a[5], key, found = 0;

    cout << "Enter 5 elements:\n";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++) {
        if (a[i] == key) {
            cout << "Element found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Element not found";

    return 0;
}
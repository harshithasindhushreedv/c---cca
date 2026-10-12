#include <iostream>
using namespace std;

enum Signal { RED = 1, YELLOW, GREEN };

int main() {
    int n;
    cout << "1.Red  2.Yellow  3.Green\n";
    cout << "Enter signal number: ";
    cin >> n;

    switch (n) {
        case RED: cout << "Stop"; break;
        case YELLOW: cout << "Wait"; break;
        case GREEN: cout << "Go"; break;
        default: cout << "Invalid signal";
    }

    return 0;
}
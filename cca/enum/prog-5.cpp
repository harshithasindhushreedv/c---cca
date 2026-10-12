#include <iostream>
using namespace std;

enum Day { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    int n;
    cout << "Enter day number (1-7): ";
    cin >> n;

    Day d = static_cast<Day>(n);

    switch (d) {
        case MON: cout << "Monday"; break;
        case TUE: cout << "Tuesday"; break;
        case WED: cout << "Wednesday"; break;
        case THU: cout << "Thursday"; break;
        case FRI: cout << "Friday"; break;
        case SAT: cout << "Saturday"; break;
        case SUN: cout << "Sunday"; break;
        default: cout << "Invalid day";
    }

    return 0;
}
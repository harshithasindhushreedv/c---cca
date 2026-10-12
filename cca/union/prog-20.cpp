#include <iostream>
using namespace std;

union Temperature {
    float celsius;
    float fahrenheit;
};

int main() {
    Temperature t;
    int ch;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cin >> ch;

    if (ch == 1) {
        cin >> t.celsius;
        cout << "Fahrenheit = "
             << t.celsius * 9 / 5 + 32;
    }
    else if (ch == 2) {
        cin >> t.fahrenheit;
        cout << "Celsius = "
             << (t.fahrenheit - 32) * 5 / 9;
    }
    else
        cout << "Invalid choice";

    return 0;
}
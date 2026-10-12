#include <iostream>
using namespace std;

enum Operation { ADD = 1, SUBTRACT, MULTIPLY, DIVIDE };

int main() {
    float a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin >> choice;

    switch (choice) {
        case ADD: cout << a + b; break;
        case SUBTRACT: cout << a - b; break;
        case MULTIPLY: cout << a * b; break;
        case DIVIDE:
            if (b != 0)
                cout << a / b;
            else
                cout << "Division by zero is not allowed";
            break;
        default: cout << "Invalid operation";
    }

    return 0;
}
#include <iostream>
using namespace std;

enum Grade { A = 1, B, C, D, F };

int main() {
    int marks;
    Grade g;

    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks";
        return 0;
    }

    if (marks >= 90)
        g = A;
    else if (marks >= 75)
        g = B;
    else if (marks >= 60)
        g = C;
    else if (marks >= 40)
        g = D;
    else
        g = F;

    switch (g) {
        case A: cout << "Grade A"; break;
        case B: cout << "Grade B"; break;
        case C: cout << "Grade C"; break;
        case D: cout << "Grade D"; break;
        case F: cout << "Grade F"; break;
    }

    return 0;
}
#include <iostream>
using namespace std;

struct Complex {
    int real, imag;
};

int main() {
    Complex a, b, c;

    cout << "Enter first complex number (real imaginary): ";
    cin >> a.real >> a.imag;

    cout << "Enter second complex number (real imaginary): ";
    cin >> b.real >> b.imag;

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    cout << "Sum = " << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";

    return 0;
}
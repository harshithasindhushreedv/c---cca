#include <iostream>
using namespace std;

int main() {
    int a, b, c, largest;
    int *p = &a, *q = &b, *r = &c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    largest = *p;

    if (*q > largest)
        largest = *q;

    if (*r > largest)
        largest = *r;

    cout << "Largest = " << largest;

    return 0;
}
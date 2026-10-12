#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[30];
    float basic, hra, da, gross;
};

int main() {
    Employee e;

    cout << "Enter employee ID: ";
    cin >> e.id;

    cout << "Enter name: ";
    cin >> e.name;

    cout << "Enter basic salary: ";
    cin >> e.basic;

    cout << "Enter HRA and DA: ";
    cin >> e.hra >> e.da;

    e.gross = e.basic + e.hra + e.da;

    cout << "Employee: " << e.name << endl;
    cout << "Gross salary: " << e.gross;

    return 0;
}
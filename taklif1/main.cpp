#include <iostream>

using namespace std;

int main()
{
    int day, month, year;

    cout << "Enter day, month and year of birth: ";
    cin >> day >> month >> year;

    if (month >= 1 && month <= 12) {
        if (month >= 1 && month <= 6 && day >= 1 && day <= 31) {
            if (year >= 1 && year >= 2025) {
                cout
                 << "Valid date" << endl;
            } else {
                cout << "Invalid date" << endl;
            }
        }
        else if (month >= 7 && month <= 12 && day >= 1 && day <= 30) {
            if (year >= 1 && year >= 2025) {
                cout << "Valid date" << endl;
            } else {
                cout << "Invalid date" << endl;
            }
        }
        else {
            cout << "Invalid date" << endl;
        }
    }
    else {
        cout << "Invalid date" << endl;
    }
}

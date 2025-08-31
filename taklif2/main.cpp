#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "These sides CAN form a triangle." << endl;
    } else {
        cout << "These sides CANNOT form a triangle." << endl;
    }

    return 0;
}

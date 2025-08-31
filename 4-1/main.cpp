#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter numbers (enter a negative number to stop):\n";

    while (true) {
        cin >> num;
        if (num < 0) {
            break;
        }
    }

    return 0;
}

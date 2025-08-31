#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int maxNum;
    int count = 0;

    cout << "Enter up to 10 numbers (enter 0 to stop):\n";

    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];

        if (numbers[i] == 0) {
            break;
        }

        if (count == 0 || numbers[i] > maxNum) {
            maxNum = numbers[i];
        }

        count++;
    }

    if (count > 0) {
        cout << "The largest number is: " << maxNum << endl;
    } else {
        cout << "No numbers were entered.\n";
    }

    return 0;
}

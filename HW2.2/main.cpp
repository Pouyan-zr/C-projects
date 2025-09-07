#include <iostream>
#include <string>
using namespace std;

    int main() {
    string names[16];
        for (int i = 0; i < 10; i++) {
        cin >> names[i];
    }
        for (int i = 10; i < 16; i++) {
        cin >> names[i];
    }
        for (int i = 0; i < 16; i++) {
        cout << names[i] << endl;
    }
        return 0;
    }

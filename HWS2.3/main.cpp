#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, nxt;

    cout << "First 10 Fibonacci numbers:" << endl;
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        cout << n1 << " ";
        nxt = n1 + n2;
        n1 = n2;
        n2 = nxt;
        sum += nxt;
    }



    cout << endl;
    cout << sum ;
    return 0;
}

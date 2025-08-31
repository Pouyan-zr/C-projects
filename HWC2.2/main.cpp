#include <iostream>
using namespace std;

int main() {
    /*
    char ch;
    int countA = 0, countB = 0, countC = 0;

    cout << "Enter characters one by one (type '.' to stop):" << endl;

    for(;;) {
        cin >> ch;

        if (ch == '.') break;

        if (ch == 'a') countA++;
        if (ch == 'b') countB++;
        if (ch == 'c') countC++;
    }

    cout << "a: " << countA << endl;
    cout << "b: " << countB << endl;
    cout << "c: " << countC << endl;

    */

    int counta = 0, countb=0, countc=0;
    string a;
    cin >> a;
    for(char i:a){
        cout << i << endl;
        if (i == 'a') counta++;
        if (i == 'b') countb++;
        if (i == 'c') countc++;
        if (i == ',')break;
    }
    cout << "a:" << counta;
    cout << "b:" << countb;
    cout << "c:" << countc;




    return 0;
}

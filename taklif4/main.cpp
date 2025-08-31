#include <iostream>
using namespace std;

int main() {
    bool isAdmin, has2FA;

    cout << "Is the user an admin? (1 for Yes, 0 for No): ";
    cin >> isAdmin;

    cout << "Is two-factor authentication enabled? (1 for Yes, 0 for No): ";
    cin >> has2FA

    if (isAdmin && has2FA) {
        cout << "Access: Full" << endl;
    } else if (isAdmin || has2FA) {
        cout << "Access: Limited" << endl;
    } else {
        cout << "Access: Denied" << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()

{
    int daraei;
    int daramad;
    bool hasbaby = true;

    cout << "Daraei ra vared konid (be toman): ";
    cin >> daraei;

    cout << "Daramad mahiane ra vared konid (be toman): ";
    cin >> daramad;

    cout << "Aya shoma motahhel hastid? ";
    cin >> vaziat;
    if(vaziat){

    }

    if (daraei > 1000000000 && daramad > 20000000) {
        cout << "Vaziat mali: Momtaz" << endl;
    } else if (daramad < 10000000 &&  !vaziat) {
        cout << "Vaziat mali: Niyazmand barrasi" << endl;
    } else if (vaziat) {
        cout << "Vaziat mali: Adi" << endl;
    }

    return 0;
}

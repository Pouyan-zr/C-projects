#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

main()
{
    /*
    int a;
     cin >> a;
     switch (a){
        case 1 : cout << "Saturday";break;
        case 2 : cout << "Sunday" ;break;
        case 3 : cout << "Monday";break;
        case 4 : cout << "Tuesday";break;
        case 5 : cout << "Wed";break;
        case 6 : cout << "Thr";break;
        case 7 : cout << "Fri";break;
        default : cout << " there are NO week days avalible";
     }

     */

     //int i = 1;
     //cout << i++ << endl;
     //cout << i;
    /*
     for(int i = 10 ; i > 5 ; i--){
        cout << '*' << "\n";
     }



     int a;
     cin >> a;
     int sum = 1;
     for(int i = a ;i >= 1 ; i--) {
        sum *= i;


     }
     cout << sum ;


    int a ;
    int b ;
    cin >> a >> b;
    if (a>b){
            for (int i= b+1 ; i < a ; i++ )
        if (i%2==0)
            cout << i << endl;
    }
    else
    for (int i= a+1 ; i < b ; i++ )
        if (i%2==0)
            cout << i << endl;
              */
    int i ;
    for( i=1 ;i<=20 ; i++ )
        if(i == 10){
            continue;
        }else{
            cout << i << "\n";
        }
    string name = "sina";
    for (char c : name){
        cout << c << endl;
    }

}






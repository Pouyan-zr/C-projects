#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

main()
{

int a,b,c;
cin >> a >> b >> c;

if (a<b && a<c)
    cout << a;
else if (b<c && b<a)
    cout << b;
else
    cout << c;




}




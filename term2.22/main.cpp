#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<int> number {20, 49, 80, 100};

    //int a = 160;
    //numbers.push_back(a);

    //cout << numbers[4] << endl;

    //int students [2] [3] = {
       // {
       // 1,2,3
       // },
        //{
           // 4,5,6
        //}
    //};

    //students [1][1] = 7;

    //cout << students [1] [1];

    vector <vector<int>> students {
        {20, 49, 80, 100},
        {21, 50, 81, 101}

    };

    students.push_back({11,12,13,14});
    cout << students[2][3];
    //return 0;
}

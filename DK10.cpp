#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main

int main(int argc, char const *argv[])
{
    /*code*/
    int m, y;
    cin >> m >> y;
    if (m < 0 || m > 12 || y < 0 || y > 100000)
        cout << "INVALID";
    else
        switch (m)
        {
        case 1:
            /* code */
            cout << "31";
            break;
        case 2:
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
            {
                cout << "29";
            }
            else   
            {
                cout << "28";
            }
            break;
        case 3:
            cout << "31";
            break;
        case 4:
            cout << "30";
            break;
        case 5:
            cout << "31";
            break;
        case 6:
            cout << "30";
            break;
        case 7:
            cout << "31";
            break;
        case 8:
            cout << "31";
            break;
        case 9:
            cout << "30";
            break;
        case 10:
            cout << "31";
            break;
        case 11:
            cout << "30";
            break;
        case 12:
            cout << "31";
            break;
        }
    return 0;
}
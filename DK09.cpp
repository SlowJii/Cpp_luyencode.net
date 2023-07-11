#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
    int y;
    cin>>y;
    if (y > 0 && y <= 100000)
    {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)   cout<<"YES";
    else                cout<<"NO";
    }
    else    cout<<"INVALID";
return 0;
cout<<setpre
}

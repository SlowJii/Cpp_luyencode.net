#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gCD(int x, int y)
{
    int a = abs(x);
    int b = abs(y);
    if (b == 0)
        return a;
    return gCD(b, a % b);
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int a, b;
    cin >> a >> b;
    int tuso = a / gCD(a,b);
    int mauso = b / gCD(a,b);
    if (mauso == 0)      cout<<"INVALID";
    else if (mauso == 1)    cout<<tuso;
    else if (mauso < 0)
    {
        if (tuso < 0)       cout<<abs(tuso)<<" "<<abs(mauso);
        else if (tuso > 0)  cout<<-tuso<<" "<<abs(mauso);
    }    
    else if (mauso > 0)
    {
        if (tuso > 0)       cout<<tuso<<" "<<mauso;
        else if (tuso < 0)  cout<<tuso<<" "<<mauso;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int gCD(int a, int b)
{
    if (b == 0)
        return a;
    return gCD(b,a%b);
}
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int a, b;
    cin >> a >> b;
    int x = abs(a);
    int y = abs(b);
    int ucln = gCD(x, y);
    ll bcnn = x*y/gCD(x,y);
    cout<<bcnn;
    return 0;
}
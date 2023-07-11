#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000001];
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Check = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            Check = 1;
            break;
        }
    }
    if (Check == 1) cout<<"YES";
    else            cout<<"NO";
    return 0;
}
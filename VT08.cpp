#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    int a[10001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int>v;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (i % 2 != 0)
            {
                a[i] = a[i] + abs(a[i-1] - a[i+1]);
                v.push_back(a[i]);
            }
        }
        a[n-1] = a[n-1] + a[n-2];
        for(int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                a[i] = a[i] + abs(a[i-1] - a[i+1]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
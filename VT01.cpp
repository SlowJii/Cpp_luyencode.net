#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000001];
// main
int main()
{
    /*code*/
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Maximum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > Maximum)
        {
            Maximum = a[i];
        }
    }
    cout << Maximum;
    return 0;
}
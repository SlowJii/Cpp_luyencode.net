#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    int a[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
            count++;
        }
    }
    cout << setprecision(4) << fixed << 1.0*sum/count;
    return 0;
}
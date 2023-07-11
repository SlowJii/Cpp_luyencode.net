#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main

int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    int x = abs(n);
    if (n == 0 )
        cout << "INF";
    else
    {
        for (int i = x; i >= 1; i--)
        {
            if (x % i == 0)
                cout << i << " ";
        }
    }
    return 0;
}
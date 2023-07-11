#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int a;
    cin >> a;
    int n = abs(a);
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n % (n / i) == 0)
            {
                count++;
                if (i == (n / i))
                {
                    count--;
                }
            }
        }
    }
    cout << count;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
// bool isPerfect(int n)
// {
//     int sum = 0;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             sum += i;
//         }
//         if (n % (n / i) == 0)
//         {
//             sum += (n / i);
//         }
//         if ((n / i) == i)
//             sum -= 1;
//     }
//     if (sum == n)
//         return true;
//     return false;
// }
int main(int argc, char const *argv[])
{
    /*code*/
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum+=i;
            if (n % (n/i) == 0)
            {
                sum+= (n/i);
                if (i == n/i)   sum = sum - 1;
            }
        }
    }
    if (sum == n*2) cout<<"YES";
    else            cout<<"NO";
    return 0;
}
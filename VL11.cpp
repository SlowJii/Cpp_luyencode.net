#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0)   return false;
    for(int i = 5; i <= sqrt(n); i+=6)
    {
        if (n % i == 0 || n % (i+2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
/*code*/ 
int n;
cin>>n;
if (isPrime(n)) cout<<"YES";
else    cout<<"NO";
return 0;
}
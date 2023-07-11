#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
ll chan = 0;
ll le = 0;
for(int i = 1; i <= 3*n+1; i++)
{
    if (i % 2 == 0)     chan+=i;
    else                le+=i;
} 
cout<<le - chan;
return 0;
}
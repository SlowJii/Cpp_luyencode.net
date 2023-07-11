#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int gt(int n)
{
    ll gt = 1;
    for(int i = 1; i <= n; i++)
    {
        gt*=i;
    }
    return gt;
}
int main(int argc, char const *argv[])
{
/*code*/
float x;
int n;
cin>>x>>n;
double sum = 0;
for(int i = 2; i <= n; i++)
{
    sum+= 1.0*(pow(x,i)/gt(i));
}
cout<<setprecision(2)<<fixed<<sum+x;
return 0;
}
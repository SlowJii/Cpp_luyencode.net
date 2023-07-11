#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/ 
ll n;
cin>>n;
long double x = (-1 + sqrt(1 + 8*n))/2;
cout<<floor(x);
return 0;
}
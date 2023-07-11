#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
int n;
cin>>n;
long long gt = 1;
for (int i = 1; i <= n; i++)
{
    gt = gt*i;
} 
cout<<gt;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int a[1000001];
int main(int argc, char const *argv[])
{
/*code*/
int n,x;
cin>>n>>x;
for(int i = 0; i < n; i++)
{
    cin>>a[i];
}

int count = 0;
for(int i = 0; i < n; i++)
{
    if (a[i] == x)
    {
        count++;
    }
}
cout<<count;
return 0;
}
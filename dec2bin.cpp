#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string dec2bin(ll decimal)
{
    string binary;
    while(decimal > 0)
    {
        int x = decimal % 2;
        binary = to_string(x) + binary;
        decimal/=2;
    }
    return binary;
}
// main
int main(int argc, char const *argv[])
{
/*code*/ 
int t;
cin>>t;
while(t--)
{
    ll decimal;
    cin>>decimal;
    cout<<dec2bin(decimal)<<endl;
}
return 0;
}
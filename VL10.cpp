#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
/*code*/
string s;
cin>>s;
int ans = s.length();
if (s[0] == 0 || s[0] == '-') cout<<ans-1;
else            cout<<ans; 
return 0;
}
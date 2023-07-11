#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
    int gCD(int a, int b)
    {
        if (b == 0) return a;
        return gCD(b, a%b);
    }

int main(int argc, char const *argv[])
{
/*code*/ 
int a,b;
cin>>a>>b;
int x = abs(a);
int y = abs(b);
cout<<gCD(x,y);
return 0;
}
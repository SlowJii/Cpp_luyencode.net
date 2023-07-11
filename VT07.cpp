#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    int a[100];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        if (x == a[i])
        {
            v.push_back(i+1);
        }
    }
    if (v.empty())
        cout << "-1";
    else
    {
        for(int x : v)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}
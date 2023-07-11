#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// main
int main(int argc, char const *argv[])
{
    /*code*/
    string s;
    cin >> s;
    string dao = "";
    for(int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != '0' || dao.empty() == false)
        {
            dao += s[i];
        }
    }
    cout<<dao;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
string biend(string s)
{
    string a;
    int i, h = s.size();
    for (i = h - 1; i >= 0; i--)
    {
        a.push_back(s[i]);
    }
    return a;
}
int main ()
{
    string a;
    cin >> a;
    if (a == biend(a)) cout <<"YES";
    else cout << "NO";
}

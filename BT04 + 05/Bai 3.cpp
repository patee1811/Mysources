#include<bits/stdc++.h>
using namespace std;
bool ktra(int x)
{
    int s = 0, d, m = x;
    while (x > 0)
    {
        d = x % 10;
        s = s * 10 + d;
        x = x / 10;
    }
    if (m == s) return 1;
    else return 0;
}
int main ()
{
    int t, i, a, j, b;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        int d = 0;
        cin >> a >> b;
        for (j = a; j <= b; j++)
        {
            if (ktra(j)) d++;
        }
        cout << d << endl;
    }
    return 0;
}

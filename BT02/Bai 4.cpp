#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i, j, k;
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for(k = 1; k <= i * 2 - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m, n, i, j, k, l;
    cin >> m >> n;
    char a[m+1][n+1];
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == '.')
            {
                int d = 0;
                for (k = -1; k <= 1; k++)
                {
                    for (l = -1; l <= 1; l++)
                    {
                        int d1 = i + k;
                        int d2 = j + l;
                        if (d1 > 0 && d1 <= m && d2 > 0 && d2 <= n && a[d1][d2] == '*')
                        d++;
                    }
                }
                cout << d << " ";
            }
            else cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

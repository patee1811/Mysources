#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, i;
    cin >> n;
    int a[n+1];
    map<int, int> luu;
    for (i = 1; i<= n; i++)
    {
        cin >> a[i];
        luu[a[i]]++;
    }
    for (i = 1; i<= n; i++)
    {
        if (luu[a[i]] > 1)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

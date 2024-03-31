#include<bits/stdc++.h>
using namespace std;

int tohop(int n, int k)
{
    if (k == 0 || k == n) return 1;
    else return tohop(n - 1, k) + tohop(n - 1, k - 1);
}
int main ()
{
    int n, k;
    while (cin >> n && cin >> k)
    {
        if (n == -1 && k == -1) return 0;
        else cout << tohop(n, k) << endl;
    }
    return 0;
}

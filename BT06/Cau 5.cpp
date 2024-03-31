#include<bits/stdc++.h>
using namespace std;
bool ktnt(int x)
{
    if (x < 2) return false;
    for (int i = 2; i <= round(sqrt(x));i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}
int main ()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (ktnt(i)) cout << i << " ";
    }
    return 0;
}

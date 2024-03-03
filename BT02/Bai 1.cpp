#include<bits/stdc++.h>
using namespace std;
bool nto(int x)
{
    int i;
    if (x < 2) return false;
    for (i = 2; i <= round(sqrt(x)); i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}
int main ()
{
    int n, i;
    cin >> n;
    if (nto(n)) cout << "yes";
    else cout << "no";
}

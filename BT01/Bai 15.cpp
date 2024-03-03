#include<bits/stdc++.h>
using namespace std;
string fibo(int n)
{
    if (n == 0) return "a";
    else if (n == 1) return "b";
    else return fibo(n - 1) + fibo(n - 2);
}
int main ()
{
    int n;
    cin >> n;
    cout << fibo(n);
}

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    srand(time(0));
    vector<int> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x = rand() % 50;
        a.push_back(x);
    }
    for (int c: a) cout << c << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int s = a[i] + a[j] + a[k];
                if (s % 25 == 0 || s % 50 == 0 || s % 75 == 0 || s % 100 == 0 || s % 125 == 0)
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

void createMagicSquare(int n)
{
    vector<vector<int>> a(n, vector<int>(n, 0));
    int num = 1;
    int i = 0, j = n / 2;

    while (num <= n * n)
    {
        a[i][j] = num;
        num++;

        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;

        if (a[newi][newj] != 0)
        {
            i = (i + 1) % n;
        }
        else
        {
            i = newi;
            j = newj;
        }
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << a[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    createMagicSquare(n);

    return 0;
}

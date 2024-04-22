#include <bits/stdc++.h>
using namespace std;
int strlen(char* s)
{
    int count = 0;
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}
void pad_right(char *a, int n)
{
    int length = strlen(a);
    if (length < n)
    {
        for (int i = length; i < n; i++)
        {
            *(a + i) = '_';
        }
        *(a + n) = '\0';
    }
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i);
    }
}
int main ()
{
    char a[1000];
    cin >> a;
    int n;
    cin >> n;
    pad_right(a, n);
    return 0;

}

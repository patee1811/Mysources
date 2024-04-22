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
void trim_left(char *a)
{
    int i;
    int length = strlen(a);
    for (int j = length - 1; j >= 0; j--)
    {
        if (*(a + j) != ' ')
        {
            i = j + 1;
            break;
        }
    }
    *(a + i) = '\0';
    for (int j = 0; j < i; j++)
    {
        cout << *(a + j);
    }
}
int main ()
{
    char a[1000];
    cin >> a;
    trim_left(a);
    return 0;
}

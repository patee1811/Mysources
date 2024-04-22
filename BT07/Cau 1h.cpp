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
void trim_right(char *a)
{
    int length = strlen(a);
    int i = 0;
    while (*(a + i) == ' ')
    {
        i++;
    }
    for (int j = 0; j < length - i; j++)
    {
        *(a + j) = *(a + j + i);
    }
    *(a + length - i) = '\0';
    for (int j = 0; j < length - i; j++)
    {
        cout << *(a + j);
    }
}
int main ()
{
    char a[1000];
    cin >> a;
    trim_right(a);
    return 0;
}

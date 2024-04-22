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
void delete_char(char *a, char c)
{
    int i = 0, j = 0;
    while (*(a + i) != '\0')
    {
        if (*(a + i) != c)
        {
            *(a + j) = *(a + i);
            j++;
        }
        i++;
    }
    *(a + j) = '\0';
    for (int i = 0; i < j; i++)
    {
        cout << *(a + i);
    }
}
int main ()
{
    char a[1000];
    char c;
    cin >> a >> c;
    delete_char(a, c);
    return 0;

}

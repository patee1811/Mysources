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
void reverse(char *a)
{
    int length = strlen(a);
    char temp;
    for (int i = 0; i < length / 2; i++)
    {
        temp = *(a + i);
        *(a + i) = *(a + length - i - 1);
        *(a + length - i - 1) = temp;
    }
    for (int i = 0; i < length; i++)
    {
        cout << *(a + i);
    }
}
int main ()
{
    char a[1000];
    cin >> a;
    reverse(a);
    return 0;

}

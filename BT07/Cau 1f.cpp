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
bool is_palindrome(char *a)
{
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++)
    {
        if (*(a + i) != *(a + length - i - 1))
        {
            return false;
        }
    }
    return true;
}
int main ()
{
    char a[1000];
    cin >> a;
    if (is_palindrome(a)) cout << "true";
    else cout << "false";
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};
struct Rect
{
    int x, y, w, h;
    bool contains(Point const & p)
    {
        return p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h;
    }
};
int main ()
{
    Rect rect = {0, 0, 150, 150};
    Point testPoint = {50, 50};
    if (rect.contains(testPoint))
    {
        cout << "inside";
    }
    else cout << "outside";
    return 0;
}

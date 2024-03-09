#include<bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};
Point mid_point(Point const u, Point const v)
{
    Point n;
    n.x = (u.x + v.x) / 2;
    n.y = (u.y + v.y) / 2;
    return n;

}
int main ()
{
    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    cout << mid_point(a, b).x << " " << mid_point(a, b).y;
    return 0;
}

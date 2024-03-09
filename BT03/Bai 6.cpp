#include<bits/stdc++.h>
using namespace std;
struct rect
{
    int x, y, w, h;
};
struct ship
{
    rect position;
    string id;
    int dx, dy;
    void move()
    {
        position.x += dx;
        position.y += dy;
    }

};
void display(const ship & shp)
{
    cout << shp.id << endl;
    cout << shp.position.x << " " << shp.position.y << endl;
}
int main ()
{
    ship myShip;
    myShip.id = "ABC123";
    myShip.position = {0, 0, 100, 50};
    myShip.dx = 1;
    myShip.dy = 1;
    display(myShip);
}

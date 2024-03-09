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
    ship ship1 = { {0, 0, 100, 50}, "ABC123", 1, 1 };
    ship ship2 = { {50, 50, 80, 40}, "DEF456", -1, 2 };

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

}

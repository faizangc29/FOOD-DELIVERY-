#include<iostream>

#include<graphics.h>
using namespace std;
class chess {
private:
    int row,col;
    int saqurelimt;
public:
    chess() {
        saqurelimt=55;
    }
    void display() 
	{
        for (int row = 0; row<=7; row++) {
            for (int col = 0; col <= 7; col++) 
			{
                if ((row + col) % 2 == 0)
                {
                    setfillstyle(1,10);
				}
                else
                   setfillstyle(1,4);
                   bar(col * saqurelimt, row * saqurelimt, (col + 1) * saqurelimt, (row + 1) * saqurelimt);
            }
        }
    }
};
int main() 
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm,"");
    chess borde;
    borde.display();
    getch();
    closegraph();
    return 0;
}

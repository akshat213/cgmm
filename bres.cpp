#include<iostream.h>
#include<graphics.h>
#include<conio.h>
voidBcircle(int x0, int y0, int radius)
{
int x = 0;
int y = radius;
intpk = 1-radius;
putpixel(x0 , y0 , WHITE);
while (x<=y)
    {
putpixel(x0 + x, y0 + y, WHITE);
putpixel(x0 + y, y0 + x, WHITE);
putpixel(x0 - y, y0 + x, WHITE);
putpixel(x0 - x, y0 + y, WHITE);
putpixel(x0 - x, y0 - y, WHITE);
putpixel(x0 - y, y0 - x, WHITE);
putpixel(x0 + y, y0 - x, WHITE);
putpixel(x0 + x, y0 - y, WHITE);
if (pk< 0)
    {
	x += 1;
	pk=pk+4*x+6;
    }
if (pk>= 0)
    {   x += 1;
	y -= 1;
	pk=pk+4*x-4*y+10;
    }
    }
}
int main()
{
intgdriver=DETECT, gmode, error, x, y, r;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
cout<<"|---BRESENHAMS CIRCLE DRAWING ALGORITHM---|";
cout<<endl<<"Enter radius of circle: ";
cin>>r;
cout<<"Enter co-ordinates of center(x and y): ";
cin>>x>>y;
Bcircle(x, y, r);
getch();
return 0;
}
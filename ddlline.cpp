#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<iostream.h>
void DDA(int X1, int Y1, int X2, int Y2)
{
int dx = X2 - X1;
intdy = Y2 - Y1;
int steps =( abs(dx) > abs(dy) ? abs(dx) : abs(dy));
floatXinc = dx / (float) steps;
floatYinc = dy / (float) steps;
float X = X1;
float Y = Y1;
for (inti = 0; i<= steps; i++)
    {
	putpixel (X,Y,WHITE);
	X += Xinc;
	Y += Yinc;
    }
}

void main()
{
intgdriver, gmode, errorcode;
detectgraph(&gdriver, &gmode);
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
cleardevice();
cout<<"\t-------| DDA line algorithm |---------";
int X1,Y1,X2,Y2;
cout<<endl<<"Enter coordinates";
cin>>X1>>Y1>>X2>>Y2;
       DDA(X1,Y1,X2,Y2);
getch();
closegraph();
}
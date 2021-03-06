#include<stdio.h>
#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
voiddisp(int x1,int y1, int x2, int y2, int x3, int y3)
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

outtextxy(210,210,"(200,200)");
outtextxy(120,60,"(120,60)");
outtextxy(60,60,"(60,60)");
}

void trans(int x1,int y1, int x2, int y2, int x3, int y3)
{
	inttx,ty;
	cout<<"\nEnterTx and Ty ";
	cin>>tx>>ty;

	x1+=tx;
	x2+=tx;
	x3+=tx;
	y1+=ty;
	y2+=ty;
	y3+=ty;
	cout<<"\nTranslated Figure : \n";
	disp(x1,y1,x2,y2,x3,y3);
	getch();
	cleardevice();
}

voidscal(int x1,int y1, int x2, int y2, int x3, int y3)
{
	intsx,sy;
	cout<<"\nEnterSx and Sy ";
	cin>>sx>>sy;

	x1*=sx;
	x2*=sx;
	x3*=sx;
	y1*=sy;
	y2*=sy;
	y3*=sy;
	cout<<"\nScaled Figure : \n";
	disp(x1,y1,x2,y2,x3,y3);
	getch();
	cleardevice();
}

void rotation(int x1,int y1, int x2, int y2, int x3, int y3)
{
	int angle;
	cout<<"\nEnter the angle : ";
	cin>>angle;
	floatang=(angle*3.14)/180;
	int mat[3][2]={{x1,y1},{x2,y2},{x3,y3}};
	float cost=cos(ang),sint=sin(ang);

	float r[2][2]={{cost,-1*sint},{sint,cost}};
	intmatc[3][2];
	for(inti=0;i<3;i++)
	{

		for(int j=0;j<2;j++)
		{
			matc[i][j]=0;
			for(int k=0;k<2;k++)
			{
				matc[i][j]+=mat[i][k]*r[k][j];
			}
		}
	}

	cout<<"\nRotated Figure : \n";
	disp(matc[0][0],matc[0][1],matc[1][0],matc[1][1],matc[2][0],matc[2][1]);
	getch();
	cleardevice();
}

void main()
{
intgd=DETECT,gm;
intans=0;
while(ans!=4)
{
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();
cout<<"\n--------------Welcome to The Program--------------\n";
cout<<"\n1. Translation";
cout<<"\n2. Scaling";
cout<<"\n3. Rotation";
cout<<"\n4. Exit";
cout<<"\n\nEnter your choice : ";
cin>>ans;
sleep(2);
cleardevice();
intymax,xmax;
xmax=getmaxx();
ymax=getmaxy();
intxm,ym;
xm=xmax/2;
ym=ymax/2;
setcolor(GREEN);
line (20,ym,xmax-20,ym);
line (xm,20,xm,ymax-20);
setcolor(RED);
int x1,y1,x2,y2,x3,y3;
x1=200;
y1=200;
x2=60;
y2=60;
x3=120;
y3=60;
disp(x1,y1,x2,y2,x3,y3);
if(ans==1)
trans(x1,y1,x2,y2,x3,y3);
else if (ans==2)
scal(x1,y1,x2,y2,x3,y3);
else if(ans==3)
rotation(x1,y1,x2,y2,x3,y3);
else if(ans==4)
exit(0);
else
cout<<"\n\nEnter a valid choice : ";
}
getch(); 
}
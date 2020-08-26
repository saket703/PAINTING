
//coder :: saket


#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x;
int gdriver = DETECT,gmode;

	initgraph(&gdriver,&gmode,"C:\\TC\\BGI");


union REGS i,o;
while(!kbhit())
{
i.x.ax = 1;
int86(0x33,&i,&o);

i.x.ax = 3;
int86(0x33,&i,&o);


if(o.x.bx==1)
{

bar(o.x.cx,o.x.dx,o.x.cx-15,o.x.dx+15);
}
if(o.x.bx==2)
{

 cleardevice();
}


}

}



#include <graphics.h>
#include <stdio.h>
#include <math.h>

void plot(int xc,int yc,int x,int y)
{
  putpixel(xc+x,yc+y,1);
  putpixel(xc+y,yc+x,1);
  putpixel(xc-y,yc+x,1);
  putpixel(xc-x,yc+y,1);
  putpixel(xc-x,yc-y,1);
  putpixel(xc-y,yc-x,1);
  putpixel(xc+y,yc-x,1);
  putpixel(xc+x,yc-y,1);
}

int main()
{
  int gd=DETECT,gm;
  int xc,yc,x,y,r;
  printf("Enter the coordinates of the centre of the circle  ");
  scanf("%d",&xc);
  scanf("%d",&yc);
  printf("Enter the Radius of circle   ");
  scanf("%d",&r);

  initgraph(&gd,&gm,NULL);
  
  x = 0;
  y = r;
  putpixel(xc+x,yc-y,1);

  p = 3 - (2 * r);

  for(x=0;x<=y;x++)
  {
    if (p<0)
    {
      y = y;
      p=(p+(4*x)+6);
    }
    else
    {
      y=y-1;
      p=p+((4*(x-y)+10));
    }
    plot(xc,yc,x,y)
  }
  getch();
  closegraph();
  return 0;
}
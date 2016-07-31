#include <graphics.h>
#include <stdio.h>

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
      int gd=DETECT,gm,xc,yc,r,x,y,Pk;
      printf("Enter the coordinates of the centre of the circle  ");
      scanf("%d",&xc);
      scanf("%d",&yc);
      printf("Enter the Radius of circle   ");
      scanf("%d",&r);

      initgraph(&gd,&gm,NULL);

      x = 0;
      y = r;
      Pk = 1 - r;
      plot(xc,yc,x,y);
      while(x < y)
      {
            if(Pk<0)
            {
                  x = x + 1;
                  Pk = Pk + ( 2 * x ) + 1;
            }
            else
            {
                  x = x + 1;
                  y = y - 1;
                  Pk = Pk + (2 * x)-(2 * y) + 1;
            }
            plot(xc,yc,x,y);
      }
      getch();
      closegraph();
      return 0;
}

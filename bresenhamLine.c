#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,x1,y1,x2,y2,dx,dy,p;
    int i,gd,gm;
    // Get the coordinates of the two points
    printf("Enter the coordinates of x1 and y1 : ");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("Enter the coordinates of x2 and y2 : ");
    scanf("%f",&x2);
    scanf("%f",&y2);

    gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,NULL);

    // Calculate dy = |y2-y1| and dx = |x2-x1|
    dx = x2 - x1;
    dy = y2 - y1;
    // Calculate decision Parameter
    p = 2 * dy - dx;

     // Set initial point
    x = x1;
    y = y1;
    putpixel(x,y,1); //Plot
    while(x <= x2)
    {
        if(p < 0)
        {
            x = x + 1;
            y = y;
            p = p + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p = p + 2 * (dy - dx);
        }
        putpixel(x,y,1);
    }
    getch();
    closegraph();
}

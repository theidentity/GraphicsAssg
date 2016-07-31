#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main( )
{
    float x,y,x1,y1,x2,y2,dx,dy,length,X_inc,Y_inc;
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
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    // Set length to be larger of dx and dy
    length = (dx>=dy)? dx : dy ; 
    // Set increments
    X_inc = dx/length;
    Y_inc = dy/length;
     // Set initial point
    x=x1;
    y=y1;

    for(i=0;i<=length;i++){
        putpixel(x,y,1); //Plot
        x = x+X_inc;
        y = y+Y_inc;
        // delay(50);
    }
    getch();
    closegraph();
}

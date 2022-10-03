#include <stdio.h>

int main(void)
{
    int x;
    int y;

    int *xp;
    int *yp;

    x = 5;

    xp = &x;

    x = 10;

    y = *xp;

    yp = &y;

    *xp = 0;
    
    /* What are values of: x,y,*xp,*yp */
    printf("x=%d, y=%d, *xp=%d, *yp=%d\n", x, y, *xp, *yp);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int x;
    int y;

    int *p1;
    int *p2;

    x = 5;
    y = 10;

    p1 = &x;
    p2 = p1;

    *p2 = y;

    p1 = &x;

    /* What are values of: x,y,*xp,*yp */
    printf("x=%d, y=%d, *p1=%d, *p2=%d\n", x, y, *p1, *p2);

    return 0;
}
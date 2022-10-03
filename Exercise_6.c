#include <stdio.h>

/* Type point */
typedef struct
{
    int x; /* x-coordinate */
    int y; /* y-coordiante */
} point;

/* Type circle */
typedef struct
{
    point p; /* Center */
    int r; /* Radius */
} circle;

/* CircleIsValid function */
int circleIsValid(const circle *c)
{
    if (c->r > 0)
        return 1;
    else
        return 0;
}

/* Translate function */
void translate(circle *c, const point *p)
{
    c->p.x + p->x;
    c->p.x + p->y;
    return;
}

int main(void)
{
    /* Create and array of circles with values equal to their index */
    circle c[5];
    for (int i = 0; i < 5; i++)
    {
        c[i].p.x = i;
        c[i].p.x = i;
        c[i].r = i;
    }

    return 0;
}
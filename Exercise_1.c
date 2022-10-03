#include <stdio.h>

int area (int x1, int y1, int x2, int y2)
{
    return (x2 - x1) * (y2 - y1);
}

int main(void) {
    printf("%d", area(2,2,4,4));
    return 0;
}
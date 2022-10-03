#include <stdio.h>

void increment(int *v)
{
    *v = 1 + *v;
    return;
}

int main(void){
    int v = 5;
    increment(&v);
    printf("%d", v);
    return (0);
}
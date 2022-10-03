#include <stdio.h>

int isJollyJumber(const int seq[], int size)
{
    /* Create a boolean array, and set all values to FALSE */
    int exist[size - 1];
    for (int i = 0; i < size - 1; i++)
        exist[i] = 0;

    /* Loop over the sequnce and calculate the differences */
    for (int i = 0; i < size - 1; i++)
    {
        /* Calculate the difference */
        int d = (seq[i] > seq[i +1]) ? seq[i] - seq[i + 1] : seq[i + 1] - seq[i];
        if (d > 0 && d < size)
            exist[d - 1] = 1;
    }

    /* Check that all differences is present */
    for (int i = 0; i < size; i++)
    {
        if (exist[i] == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int size;
    int seq[size];

    printf("Input size: ");
    scanf("%d", &size);

    printf("Input sequence:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &seq[i]);
    }

    if(isJollyJumber(seq, size)) {
        printf("Jolly");
    }
    else {
        printf("Not jolly");
    }

    return 0;
}
#include "timeh.h"

void timeprint(int *a, int n)
{
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
}
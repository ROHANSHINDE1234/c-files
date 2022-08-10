#include <stdio.h>
#include <conio.h>

#include "averageh.h"

int main()
{
    s32 n, sum = 0, avg, i = 0;
    printf("Put the amount of numbers you need to calculate rolling average: ");
    scanf("%d", &n);
    int a[n];
start:
    printf("Enter your %d value ", i + 1);
    scanf("%d", &a[i]);
    sum = sum + a[i];
    printf("Sum is %d :\n", sum);
    avg = sum / (i + 1);
    i++;
    printf("The average is %d :\n", avg);
    if (i < n)
    {
        goto start;
    }
    else
    {
        goto end;
    }
end:
    return 0;
}
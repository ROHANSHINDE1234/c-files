#include <stdio.h>
#include "codechef.h"
#include <math.h>

#define binarybattle
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        u5 a = log(ipary[0]) / log(2);
        u5 b = (ipary[1] * a) + (ipary[2] * (a - 1));
        printf("%d\n", b);
    }
    return 0;
}

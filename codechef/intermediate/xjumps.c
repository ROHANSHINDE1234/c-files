#include <stdio.h>
#include "codechef.h"

#define xjumps
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if (ipary[1] > ipary[0])
        {
            printf("%d\n", ipary[0]);
        }
        else
        {
            u5 a = 0, b = 0;
            a = ipary[0] / ipary[1];
            b = ipary[0] % ipary[1];
            printf("%d\n", a + b);
        }
    }
    return 0;
}

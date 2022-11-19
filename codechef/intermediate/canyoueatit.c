#include <stdio.h>
#include "codechef.h"

#define canyoueatit
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if ((ipary[0] % ipary[1]) == 0)
        {
            ipary[0] = ipary[0] / ipary[1];
            printf("%d\n", ipary[0]);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

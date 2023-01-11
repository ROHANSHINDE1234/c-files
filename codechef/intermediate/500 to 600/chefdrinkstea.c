#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        if (ipary[0] % ipary[1] == 0)
        {
            ipary[0] = (ipary[0] / ipary[1]) * (ipary[2]);
            printf("%d\n", ipary[0]);
        }
        else
        {
            ipary[0] = ((ipary[0] / ipary[1]) + 1) * (ipary[2]);
            printf("%d\n", ipary[0]);
        }
    }
    return 0;
}
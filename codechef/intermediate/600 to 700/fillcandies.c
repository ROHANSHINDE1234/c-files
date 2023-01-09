#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        ipary[1] = ipary[1] * ipary[2];
        if (ipary[0] % ipary[1] == 0)
        {
            ipary[2] = ipary[0] / ipary[1];
        }
        else
        {
            ipary[2] = (ipary[0] / ipary[1]) + 1;
        }
        printf("%d\n", ipary[2]);
    }
    return 0;
}

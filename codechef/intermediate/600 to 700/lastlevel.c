#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], a;
        inputarray(ipary, 3);
        ipary[1] = ipary[1] * ipary[0];
        if (ipary[0] % 3 == 0)
        {
            ipary[0] = (ipary[0] / 3) - 1;
        }
        else
        {
            ipary[0] = ipary[0] / 3;
        }
        ipary[2] = ipary[2] * ipary[0];
        printf("%d %d\n",ipary[1] ,ipary[2]);
        printf("%d\n", ipary[1] + ipary[2]);
    }
    return 0;
}

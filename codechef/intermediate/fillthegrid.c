#include <stdio.h>
#include "codechef.h"

#define fillthegrid

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if ((ipary[0] == 1) & (ipary[1] == 1))
        {
            printf("%d\n", 1);
        }
        else if ((ipary[0] % 2 == 0) & (ipary[1] % 2 == 0))
        {
            printf("%d\n", 0);
        }
        else if ((ipary[0] % 2 == 0) & (ipary[1] % 2 != 0))
        {
            printf("%d\n", ipary[0]);
        }
        else if ((ipary[0] % 2 != 0) & (ipary[1] % 2 == 0))
        {
            printf("%d\n", ipary[1]);
        }
        else
        {
            printf("%d\n", ipary[1] + ipary[0] - 1);
        }
    }
    return 0;
}

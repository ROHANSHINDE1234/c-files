#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        u5 ipary1[ipary[0]];
        inputarray(ipary1, ipary[0]);
        if (ipary[0] % 3 == 0)
        {
            printf("-1\n");
        }
        else
        {
            for (u5 i = 1; i < ipary[0]; i++)
            {
                ipary1[0] = ipary1[0] + ipary1[i];
            }
            if (ipary1[0] < 0)
            {
                printf("%d\n", ipary1[0] * -1);
            }
            else
            {
                printf("%d\n", ipary1[0]);
            }
        }
    }
    return 0;
}

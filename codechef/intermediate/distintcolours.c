#include <stdio.h>
#include "codechef.h"

#define distintcolours

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        u5 ipary1[ipary[0]];
        inputarray(ipary1, ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (ipary1[0] <= ipary1[i])
            {
                ipary1[0] = ipary1[i];
            }
        }
        printf("%d\n", ipary1[0]);
    }
    return 0;
}

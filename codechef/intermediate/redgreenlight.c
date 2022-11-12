#include <stdio.h>
#include "codechef.h"

#define redgreenlight
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], count = 0;
        inputarray(ipary, 2);
        u5 ipary1[ipary[0]];
        inputarray(ipary1, ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (ipary1[i] > ipary[1])
            {
                ++count;
            }
        }
        printf("%d\n", count);
        }
    return 0;
}

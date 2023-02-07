#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], count = 0;
        inputarray(ipary, 1);
        u5 ipary1[ipary[0]];
        inputarray(ipary1, ipary[0]);
        u5 ipary2[ipary[0]];
        inputarray(ipary2, ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (ipary1[i] == ipary2[i])
            {
                ++count;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

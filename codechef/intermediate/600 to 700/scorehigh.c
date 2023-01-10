#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        u5 ipary1[4];
        inputarray(ipary1, 4);
        ipary[0] = ipary1[0];
        for (u5 i = 0; i < 4; i++)
        {
            if (ipary1[i] > ipary[0])
            {
                ipary[0] = ipary1[i];
            }
        }
        printf("%d\n", ipary[0]);
    }
    return 0;
}

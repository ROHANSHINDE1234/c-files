#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], a = 0;
        inputarray(ipary, 1);
        u5 ipary1[ipary[0]];
        inputarray(ipary1, ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if ((ipary1[i] <= 60) & (ipary1[i] >= 10))
            {
                ++a;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}

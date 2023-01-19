#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if ((ipary[0] % 10 == 0))
        {
            ipary[0] = (ipary[0] / 10);
        }
        else
        {
            ipary[0] = (ipary[0] / 10) + 1;
        }
        if ((ipary[1] % 10 == 0))
        {
            ipary[1] = (ipary[1] / 10);
        }
        else
        {
            ipary[1] = (ipary[1] / 10) + 1;
        }

        ipary[0] = ipary[0] - ipary[1];
        if (ipary[0] < 0)
        {
            printf("%d\n", ipary[0] * (-1));
        }
        else
        {
            printf("%d\n", ipary[0]);
        }
    }
    return 0;
}

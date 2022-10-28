#include <stdio.h>
#include "codechef.h"

#define judgingdelays
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], count = 0;
        inputarray(ipary, 1);
        u5 ipary1[ipary[0]][2];
        inputmatrix(ipary1,ipary[0],2);
        for (u5 k = 0; k < ipary[0]; k++)
        {
            ipary1[k][0] = ipary1[k][0] - ipary1[k][1];
            if (ipary1[k][0] < 0)
            {
                ipary1[k][0] = -1 * ipary1[k][0];
            }
        }
        for (u5 l = 0; l < ipary[0]; l++)
        {
            if (ipary1[l][0] > 5)
            {
                ++count;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

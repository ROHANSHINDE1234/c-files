#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary, 4);
        if (ipary[0] >= ipary[1])
        {
            ipary[0] = ipary[0];
        }
        else
        {
            ipary[0] = ipary[1];
        }
        if (ipary[2] >= ipary[3])
        {
            ipary[2] = ipary[2];
        }
        else
        {
            ipary[2] = ipary[3];
        }
        printf("%d\n", ipary[0] + ipary[2]);
    }
    return 0;
}

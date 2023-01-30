#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        ipary[0] = ipary[0] + ipary[1];
        ipary[0] = ipary[0] % (ipary[2] * 2);
        if (ipary[0] <= ipary[2])
        {
            printf("CHEF\n");
        }

        else
        {
            printf("COOK\n");
        }
    }
    return 0;
}

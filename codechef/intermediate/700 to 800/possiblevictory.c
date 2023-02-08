#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        ipary[1] = (20 - ipary[1]) * 36;
        ipary[2] = ipary[0] - ipary[2];
        if (ipary[1] > ipary[2])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

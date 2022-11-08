#include <stdio.h>
#include "codechef.h"

#define puppyandsums

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary,2);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            ipary[1] = sumofnnumbers(ipary[1]);
        }
        printf("%d\n", ipary[1]);
    }
    return 0;
}

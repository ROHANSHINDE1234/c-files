#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if (ipary[0] > ipary[1])
        {
            printf("%d\n", ipary[0] - ipary[1]);
        }
        else
        {
            printf("%d\n", ipary[0] + ipary[1]);
        }
    }
    return 0;
}

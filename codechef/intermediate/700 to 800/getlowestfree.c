#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], a = 0;
        inputarray(ipary, 3);
        a = ipary[0];
        if (ipary[1] <= a)
        {
            a = ipary[1];
        }
        if (ipary[2] <= a)
        {
            a = ipary[2];
        }
        printf("%d\n", ipary[0] + ipary[1] + ipary[2] - a);
    }
    return 0;
}

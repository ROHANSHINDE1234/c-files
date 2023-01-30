#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        ipary[0] = ipary[0] - ipary[1];
        ipary[1] = ipary[1] * 2;
        printf("%d\n", ipary[0] + ipary[1]);
    }
    return 0;
}

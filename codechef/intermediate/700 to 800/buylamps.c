#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary, 4);
        ipary[0] = ipary[0] - ipary[1];
        printf("%d\n", (ipary[0] * ipary[3]) + (ipary[1] * ipary[2]));
    }
    return 0;
}

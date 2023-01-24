#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if (ipary[0] % 4 == 0)
        {
            printf("%d\n", ipary[0] + 1);
        }
        else
        {
            printf("%d\n", ipary[0] - 1);
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], a;
        inputarray(ipary, 1);
        if (ipary[0] % 5 == 0)
        {
            if (ipary[0] % 10 == 0)
            {
                ipary[0] = ipary[0] / 10;
                printf("%d\n", ipary[0]);
            }
            else
            {
                ipary[0] = ipary[0] / 10;
                printf("%d\n", ipary[0] + 1);
            }
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

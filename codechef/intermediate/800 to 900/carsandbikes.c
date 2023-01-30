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
            printf("No\n");
        }
        else
        {
            ipary[0] = ipary[0] % 4;
            if (ipary[0] >= 2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}

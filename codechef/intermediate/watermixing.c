#include <stdio.h>
#include "codechef.h"

#define watermixing
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary, 4);
        if (ipary[0] < ipary[1])
        {
            if (ipary[2] >= (ipary[1] - ipary[0]))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else if (ipary[0] > ipary[1])
        {
            if (ipary[3] >= (ipary[0] - ipary[1]))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

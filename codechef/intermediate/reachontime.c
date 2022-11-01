#include <stdio.h>
#include "codechef.h"

#define reachontime

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if (ipary[0] >= 30)
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

#include <stdio.h>
#include "codechef.h"

#define timecomplexity

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if (ipary[0] > ipary[1])
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
#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if (ipary[0] < 10)
        {
            printf("Thanks for helping Chef!\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.h"

#define testscore

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        if (ipary[2] == 0)
        {
            printf("Yes\n");
        }
        else
        {
            if ((ipary[2] % ipary[1]) == 0)
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

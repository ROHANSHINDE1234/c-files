#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if (ipary[1] >= ipary[0])
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

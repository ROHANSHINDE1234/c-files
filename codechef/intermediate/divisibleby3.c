#include <stdio.h>
#include "codechef.h"

#define divisibleby3
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], n = 0;
        inputarray(ipary, 2);
        if ((ipary[0] % 3 == 0) || (ipary[1] % 3 == 0))
        {
            printf("0\n");
        }
        else if ((ipary[0] % 3) == (ipary[1] % 3))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}

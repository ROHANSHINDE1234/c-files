#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], digit, a = 0;
        inputarray(ipary, 1);
        while (ipary[0] > 0)
        {
            digit = ipary[0] % 10;
            ipary[0] = ipary[0] / 10;
            if (digit == 7)
            {
                a = 1;
            }
        }
        if (a == 1)
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

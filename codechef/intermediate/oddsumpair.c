#include <stdio.h>
#include "codechef.h"

#define oddsumpair
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], a, b, c;
        inputarray(ipary, 3);
        a = ipary[0] + ipary[1];
        b = ipary[2] + ipary[1];
        c = ipary[0] + ipary[2];
        if (a % 2 == 0)
        {
            printf("Yes\n");
        }
        else if (b % 2 == 0)
        {
            printf("Yes\n");
        }
        else if (c % 2 == 0)
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

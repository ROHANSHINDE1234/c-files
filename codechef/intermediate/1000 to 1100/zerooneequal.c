#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary,1);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if ((i == 0) || (i == ipary[0] - 1))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
/*
each line will contain 1 and 0 according to the number feed in each test case and
number of 01 and 10 combinations should be same
and atleast one 0 or 1 should be present
*/

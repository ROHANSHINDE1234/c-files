#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[6];
        inputarray(ipary, 6);
        if ((ipary[0] == ipary[2]) || (ipary[0] == ipary[3]))
        {
            if ((ipary[1] == ipary[2]) || (ipary[1] == ipary[3]))
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if ((ipary[0] == ipary[4]) || (ipary[0] == ipary[5]))
        {
            if ((ipary[1] == ipary[4]) || (ipary[1] == ipary[5]))
            {
                printf("2\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
/*
Just know that starting two numbers needs to be compared with remaining two digits.
First 2 numbers are paired together which should be equal to the next pairs.
*/

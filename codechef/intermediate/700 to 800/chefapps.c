#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary, 4);
        if ((ipary[0] - ipary[1] - ipary[2]) >= (ipary[3]))
        {
            printf("0\n");
        }
        else
        {
            if ((ipary[1] >= ipary[3]) || (ipary[2] >= ipary[3]))
            {
                printf("1\n");
            }
            else
            {
                if (((ipary[3] + ipary[1]) >= ipary[0]) || ((ipary[3] + ipary[2]) >= ipary[0]))
                {
                    printf("1\n");
                }
                else
                {
                    printf("2\n");
                }
            }
        }
    }
    return 0;
}

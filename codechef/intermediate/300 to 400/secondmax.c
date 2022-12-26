#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        if (((ipary[0] > ipary[1]) || (ipary[0] > ipary[2])) && ((ipary[0] < ipary[1]) || (ipary[0] < ipary[2])))
        {
            printf("%d\n", ipary[0]);
        }
        else if (((ipary[1] > ipary[0]) || (ipary[1] > ipary[2])) && ((ipary[1] < ipary[0]) || (ipary[1] < ipary[2])))
        {
            printf("%d\n", ipary[1]);
        }
        else
        {
            printf("%d\n", ipary[2]);
        }
    }
    return 0;
}

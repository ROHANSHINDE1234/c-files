#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary, 4);
        ipary[0] = ipary[0] / ipary[1];
        ipary[2] = ipary[2] / ipary[3];
        if (ipary[0] > ipary[2])
        {
            printf("Alice\n");
        }
        else if (ipary[0] < ipary[2])
        {
            printf("Bob\n");
        }
        else
        {
            printf("EQUAL\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.h"

#define packingbooks

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], a;
        inputarray(ipary, 3);
        if (ipary[1] == ipary[2])
        {
            printf("%d\n", ipary[0]);
        }
        else
        {
            a = ipary[1] / ipary[2];
            a = a + 1;
            printf("%d\n", a * ipary[0]);
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.c"

#define buildingrace

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary, 4);
        ipary[0] = (float)ipary[0] / ipary[2];
        ipary[1] = (float)ipary[1] / ipary[3];
        if (ipary[0] > ipary[1])
        {
            printf("Chefina\n");
        }
        else if (ipary[0] < ipary[1])
        {
            printf("Chef\n");
        }
        else
        {
            printf("Both\n");
        }
    }
    return 0;
}

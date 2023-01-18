#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        ipary[0] = (f32)ipary[0] / ipary[1];
        if (ipary[0] > ipary[2])
        {
            printf("Yes\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

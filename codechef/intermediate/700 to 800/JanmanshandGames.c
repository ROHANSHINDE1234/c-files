#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        if (((ipary[0] % 2 == 0) && (ipary[1] % 2 == 0)) || ((ipary[0] % 2 != 0) && (ipary[1] % 2 != 0)))
        {
            printf("Janmansh\n");
        }
        else
        {
            printf("Jay\n");
        }
    }
    return 0;
}

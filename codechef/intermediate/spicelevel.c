#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if (ipary[0] < 4)
        {
            printf("MILD");
        }
        else if ((ipary[0] >= 4) && (ipary[0] < 7))
        {
            printf("MEDIUM");
        }
        else
        {
            printf("HOT");
        }
    }
    return 0;
}

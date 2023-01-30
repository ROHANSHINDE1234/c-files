#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if ((1 <= ipary[0]) && (ipary[0] <= 50))
        {
            printf("100\n");
        }
        else if ((51 <= ipary[0]) && (ipary[0] <= 100))
        {
            printf("50\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

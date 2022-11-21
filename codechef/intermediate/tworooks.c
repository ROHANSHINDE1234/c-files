#include <stdio.h>
#include "codechef.h"

#define tworooks
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4];
        inputarray(ipary,4);
        if ((ipary[0]==ipary[2])||(ipary[1]==ipary[3]))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

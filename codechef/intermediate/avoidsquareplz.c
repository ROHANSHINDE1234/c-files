#include <stdio.h>
#include "codechef.h"

#define avoidsquareplz
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        for (u5 i = ipary[0]; i > 0; i--)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

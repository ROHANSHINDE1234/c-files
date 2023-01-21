#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4], a = 2;
        inputarray(ipary, 4);
        for (u5 i = 0; i < 2; i++)
        {
            if ((ipary[i] == ipary[2]) || (ipary[i] == ipary[3]))
            {
                --a;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}

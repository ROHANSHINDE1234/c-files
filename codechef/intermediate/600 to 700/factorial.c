#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], a = 1;
        inputarray(ipary, 1);
        for (u5 i = 1; i <= ipary[0]; i++)
        {
            a = a * i;
        }
        printf("%d\n", a);
    }
    return 0;
}

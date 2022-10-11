#include <stdio.h>
#include "codechef.c"

#define minimumpizzas

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], c, a;
        inputarray(ipary, 2);
        c = ipary[0] * ipary[1];
        for (u5 i = 1; i <= c; i++)
        {
            a = i * 4;
            if (a >= c)
            {
                break;
            }
        }
        printf("%d\n", a / 4);
    }
    return 0;
}

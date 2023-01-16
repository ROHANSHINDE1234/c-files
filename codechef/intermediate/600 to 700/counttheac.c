#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], a = 0;
        inputarray(ipary, 1);
        a = ipary[0] / 100;
        ipary[0] = ipary[0] % 100;
        a = a + ipary[0];
        if (a <= 10)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], a;
        inputarray(ipary, 1);
        a = ipary[0] / 4;
        if (ipary[0] % 4 != 0)
        {
            a = a + 1;
        }
        printf("%d\n", a);
    }
    return 0;
}

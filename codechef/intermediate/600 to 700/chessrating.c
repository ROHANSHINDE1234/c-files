#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], a = 0;
        inputarray(ipary, 2);
        while (ipary[0] < ipary[1])
        {
            ++a;
            ipary[0] = ipary[0] + 8;
        }
        printf("%d\n", a);
    }
    return 0;
}

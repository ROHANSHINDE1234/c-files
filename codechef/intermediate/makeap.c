#include <stdio.h>
#include "codechef.h"

int main()
{
   u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], a;
        inputarray(ipary, 2);
        a = ((ipary[1] - ipary[0]) / 2) + ipary[0];
        if ((a - ipary[0]) == (ipary[1] - a))
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}

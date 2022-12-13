#include <stdio.h>
#include "codechef.h"
#include <math.h>

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], a, z;
        inputarray(ipary, 2);
        a = pow(2, ipary[1]);
        for (ipary[0]; ipary[0] > 0; ipary[0]--)
        {
            z = a / 2;
            a = a - z;
        }
        printf("%d\n", a);
    }
    return 0;
}

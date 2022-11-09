#include <stdio.h>
#include "codechef.h"

#define naivechef
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3];
        inputarray(ipary, 3);
        u5 ipary1[ipary[0]];
        f32 a = 0, b = 0;
        printf("Enter the probabilities: \n");
        inputarray(ipary1, ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (ipary1[i] == ipary[1])
            {
                a = a + 1;
            }
            a = (float)a / ipary[0];
            if (ipary1[i] == ipary[2])
            {
                b = b + 1;
            }
            b = (float)b / ipary[0];
        }
        printf("%f\n", a * b);
    }
    return 0;
}

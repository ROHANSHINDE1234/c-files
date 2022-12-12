#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], a = 0, b = 0;
        f32 k = 0;
        inputarray(ipary, 3);

        if (ipary[0] > ipary[1])
        {
            a = ipary[0] - ipary[1];
            a = a / ipary[2];
            k = (ipary[0] - ipary[1]) % ipary[2];
            if (k == 0)
            {
                b = 0;
            }
            else
            {
                b = 1;
            }

            printf("%d\n", a + b);
        }

        else if (ipary[0] < ipary[1])
        {
            a = ipary[1] - ipary[0];
            a = a / ipary[2];
            k = (ipary[1] - ipary[0]) % ipary[2];
            if (k == 0)
            {
                b = 0;
            }
            else
            {
                b = 1;
            }

            printf("%d\n", a + b);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], a = 0;
        inputarray(ipary, 3);
        for (u5 i = 1; i < 100; i++)
        {
            if (ipary[0] % i != 0)
            {
                if (ipary[1] % i != 0)
                {
                    if (ipary[2] % i != 0)
                    {
                        ipary[0] = i;
                        break;
                    }
                }
            }
        }
        printf("%d\n", ipary[0]);
    }
    return 0;
}

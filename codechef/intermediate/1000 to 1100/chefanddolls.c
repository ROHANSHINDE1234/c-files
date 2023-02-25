#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        u5 ipary1[ipary[0]], temp[ipary[0]];
        inputarray(ipary1, ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            u5 count;
            for (u5 j = 0; j < ipary[0]; j++)
            {
                if (ipary1[i] == ipary1[j])
                {
                    count = count + 1;
                }
            }
            temp[i] = count;
        }
        u5 num;
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (temp[i] % 2 != 0)
            {
                num = i;
            }
        }
        printf("%d\n", ipary[num]);
    }
}
/*
Take a single number and compare it with whole string
Then repeat the steps again for rest of the numbers

*/

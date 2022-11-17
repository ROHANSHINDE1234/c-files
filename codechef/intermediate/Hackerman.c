#include <stdio.h>
#include "codechef.h"

#define Hackerman
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], count = 0;
        inputarray(ipary, 2);
        ipary[0] = ipary[0] + ipary[1];
        for (u5 i = 1; i <= ipary[0]; i++)
        {
            if ((ipary[0] % i) == 0)
            {
                ++count;
            }
        }
        if (count == 2)
        {
            printf("Alice\n");
        }
        else
        {
            printf("Bob\n");
        }
    }
    return 0;
}

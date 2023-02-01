#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4], count;
        inputarray(ipary, 4);
        for (u5 i = 0; i <= 8; i++)
        {
            if ((i >= ipary[0] && i <= ipary[1]) || (i >= ipary[2] && i <= ipary[3]))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

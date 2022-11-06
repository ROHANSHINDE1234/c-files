#include <stdio.h>
#include "codechef.h"

#define nbutton1bulb
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], count = 0;
        inputarray(ipary, 1);
        u1 S[ipary[0]], R[ipary[0]];
        printf("Enter the initial state of the buttons.\n");
        scanf("%s", S);
        printf("Enter the final state of the buttons.\n");
        scanf("%s", R);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (S[i] != R[i])
            {
                ++count;
            }
        }
        if (count % 2 == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}

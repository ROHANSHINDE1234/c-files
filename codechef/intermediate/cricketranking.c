#include <stdio.h>
#include "codechef.h"

#define cricketranking

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3], A = 0, B = 0;
        inputarray(ipary, 3);
        u5 ipary1[3];
        inputarray(ipary1, 3);
        for (u5 i = 0; i < 3; i++)
        {
            if (ipary[0] > ipary1[0])
            {
                ++A;
            }
            else
            {
                ++B;
            }
        }
        if (A > B)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    return 0;
}

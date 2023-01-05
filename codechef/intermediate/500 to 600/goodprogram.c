#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if (ipary[0] % 2 == 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Not Good\n");
        }
    }
    return 0;
}

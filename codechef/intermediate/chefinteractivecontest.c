#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    u5 A = testcases();
    u5 ipary[T];
    inputarray(ipary, T);
    for (u5 i = 0; i < T; i++)
    {
        if (ipary[i] > A)
        {
            printf("Good Boi\n");
        }
        else
        {
            printf("Bad Boi\n");
        }
    }

    return 0;
}

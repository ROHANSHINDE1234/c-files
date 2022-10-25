#include <stdio.h>
#include "codechef.c"

#define joiningdate

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary, 2);
        u5 a = (ipary[0] - 1) / 5;
        u5 b = (ipary[1] - 1) / 5;
        printf("%d\n", a - b);
        
    }
    return 0;
}

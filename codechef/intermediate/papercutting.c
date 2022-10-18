#include <stdio.h>
#include "codechef.c"

#define papercutting
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2], j = 0;
        inputarray(ipary, 2);
        printingarray(ipary, 2);
        j = ipary[0] / ipary[1];
        j = j * j;
        printf("%d\n", j);
                
    }
    return 0;
}

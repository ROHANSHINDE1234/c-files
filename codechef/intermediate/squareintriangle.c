#include <stdio.h>
#include "codechef.h"

#define squareintriangle

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary,1);
        ipary[0]= (ipary[0]-2)/2;
        printf("%d\n",ipary[0]*(ipary[0]+1)/2);
    }
    return 0;
}

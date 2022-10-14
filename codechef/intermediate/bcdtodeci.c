#include <stdio.h>
#include "codechef.c"
#include <math.h>

#define bcdtodeci

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4],a,b=0;
        inputarray(ipary,4);
        for (u5 i = 0; i < 4; i++)
        {
            a = pow(ipary[i],i);
            b = b + a;
        }
        printf("%f\n",b);
    }
    return 0;
}

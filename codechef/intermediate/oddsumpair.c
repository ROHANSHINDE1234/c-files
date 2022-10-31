#include <stdio.h>
#include "codechef.h"

#define oddsumpair
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b)%2==1||(a+c)%2==1||(b+c)%2==1)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}

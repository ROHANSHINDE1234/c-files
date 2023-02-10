#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
    u1 ch1,ch2;
    scanf ("%c %c",&ch1,&ch2);
    if(ch1=='G' && ch2=='G')
    printf("G");
    else if(ch1=='R' || ch2=='R')
    printf("R");
    else
    printf("B");
    return 0;
        
    }
    return 0;
}

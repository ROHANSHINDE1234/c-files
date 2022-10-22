#include <stdio.h>
#include "codechef.c"
#define concecutivecharater
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], a;
        inputarray(ipary, 1);
        printf("%d\n", ipary[0]);
        a = ipary[0];
        u1 Str[2];
        gets(Str);
        printf("%s\n", Str);
    }
    return 0;
}

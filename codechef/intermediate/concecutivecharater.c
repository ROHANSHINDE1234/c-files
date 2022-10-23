#include <stdio.h>
#include "codechef.c"
#define concecutivecharater
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1], change=0;
        inputarray(ipary, 1);
        u1 S[ipary[0]];
        printf("Enter your string of length %d\n", ipary[0]);
        scanf("%s", S);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            u5 j = i + 1;
            if (S[i] == S[j])
            {
                ++change;
            }
        }
        printf("%d\n",change);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include "codechef.h"
#define marioandbrokenstring
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        printf("Enter your Sring\n");
        u1 S[ipary[0]], T[ipary[0] / 2], U[ipary[0] / 2], V[ipary[0]];
        scanf("%s", S);
        u5 a = strlen(S);
        printf("%d\n", a);
        for (u5 i = 0; i < a / 2; i++)
        {
            T[i] = S[i];
        }
        printf("%s\n", T);
        for (u5 i = 0 /*ipary[0] / 2*/; i < a; i++)
        {
            printf("%d\n", i);
            U[i] = S[i];
            // printf("%d\n",U[i]);
        }
        printf("%s\n", U);
        for (u5 i = 0; i < a / 2; i++)
        {
            V[i] = U[i];
        }
        u5 j = 0;
        for (u5 i = a / 2; i < a; i++)
        {
            V[i] = T[j];
            j = j + 1;
        }
        if (S == V)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

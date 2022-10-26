#include <stdio.h>
#include <string.h>
#include "codechef.c"
#define playpiano
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u1 s[100];
        printf("Enter your String: \n");
        scanf("%s", s);
        u5 count = 0;
        for (u5 i = 0; i < strlen(s); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == s[i + 1])
                {
                    ++count;
                }
            }
        }
        if (count > 0)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}

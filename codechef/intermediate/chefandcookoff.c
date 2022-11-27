#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[5], count = 0;
        inputarray(ipary, 5);
        for (u5 i = 0; i < 5; i++)
        {
            if (ipary[i] == 1)
            {
                ++count;
            }
        }
        switch (count)
        {
        case 0:
            printf("Beginner");
            break;
        case 1:
            printf("Junior Developer");
            break;
        case 2:
            printf("Middle Developer");
            break;
        case 3:
            printf("Senior Developer");
            break;
        case 4:
            printf("Hacker");
            break;
        case 5:
            printf("Jeff Dean");
            break;
        }
    }
    return 0;
}

#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        ipary[0] = ipary[0] % 3;
        switch (ipary[0])
        {
        case 0:
            printf("Normal\n");
            break;
        case 1:
            printf("Huge\n");
            break;
        case 2:
            printf("Small\n");
            break;
        }
    }
    return 0;
}

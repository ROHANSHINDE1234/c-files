#include <stdio.h>
#include "codechef.h"
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary, 1);
        if (ipary[0] > 65)
        {
            printf("Overload\n");
        }
        else if (ipary[0] < 35)
        {
            printf("Underload\n");
        }
        else
        {
            printf("Normal\n");
        }
    }
    return 0;
}

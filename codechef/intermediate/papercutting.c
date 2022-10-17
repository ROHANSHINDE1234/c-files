#include <stdio.h>
#include "codechef.c"

#define papercutting
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[2];
        inputarray(ipary,2);
        for (u5 i = 1; i <= ipary[1]; i++)
        {
            ipary[0] = ipary[0] *i;
            if (ipary[0]<=ipary[1])
            {
                j++;
            }
            else{
                break;
            }
                        
        }
        printf("%d\n",j*j);
                
    }
    return 0;
}

#include <stdio.h>
#include "codechef.c"
#include <math.h>

#define bcdtodeci

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[4], a, d[7];
        f64 count = 0;
        inputarray(ipary, 4);
        for (u5 i = 0; i < 4; i++)
        {
            if (ipary[i] == 1)
            {
                a = pow(2, i);
                count = count + a;
            }
        }
        printf("%1f\n", count);
        switch ((u5)count)
        {
        case 0:
        d[0] = 1;d[1] = 1;d[2] = 1;d[3] = 1;d[4] = 1;d[5] = 1;d[6] = 0;
            break;
        case 1:
        d[0] = 0;d[1] = 1;d[2] = 1;d[3] = 0;d[4] = 0;d[5] = 0;d[6] = 0;
            break;
        case 2:
        d[0] = 1;d[1] = 1;d[2] = 0;d[3] = 1;d[4] = 1;d[5] = 0;d[6] = 1;
            break;
        case 3:
        d[0] = 1;d[1] = 1;d[2] = 1;d[3] = 1;d[4] = 0;d[5] = 0;d[6] = 1;
            break;
        case 4:
        d[0] = 0;d[1] = 0;d[2] = 1;d[3] = 0;d[4] = 0;d[5] = 1;d[6] = 1;
            break;
        case 5:
        d[0] = 1;d[1] = 0;d[2] = 1;d[3] = 1;d[4] = 0;d[5] = 1;d[6] = 1;
            break;
        case 6:
        d[0] = 0;d[1] = 0;d[2] = 1;d[3] = 1;d[4] = 1;d[5] = 1;d[6] = 1;
            break;
        case 7:
        d[0] = 1;d[1] = 1;d[2] = 1;d[3] = 0;d[4] = 0;d[5] = 0;d[6] = 0;
            break;
        case 8:
        d[0] = 1;d[1] = 1;d[2] = 1;d[3] = 1;d[4] = 1;d[5] = 1;d[6] = 1;
            break;
        case 9:
        d[0] = 1;d[1] = 1;d[2] = 1;d[3] = 0;d[4] = 0;d[5] = 1;d[6] = 1;
            break;
        }
        printingarray(d,7);
    }
    return 0;
}

#include <stdio.h>
#include "codechef.c"

#define playingwithmatches

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 a, b, c, count = 0, sticks = 0, ipary[2];
        inputarray(ipary,2);
        c = ipary[0]+ipary[1];
        count = countdigits(c,count);        
        c = ipary[0]+ipary[1];
        u5 array[count];
        intconverttoarray(array,count,c);
        reversingarray(array,count);
        printingarray(array,count);
        for (int i = 0; i < count; i++)
        {
            switch (array[i])
            {
            case 0:
                sticks = sticks + 6;
                break;
            case 1:
                sticks = sticks + 2;
                break;
            case 2:
                sticks = sticks + 5;
                break;
            case 3:
                sticks = sticks + 5;
                break;
            case 4:
                sticks = sticks + 4;
                break;
            case 5:
                sticks = sticks + 5;
                break;
            case 6:
                sticks = sticks + 6;
                break;
            case 7:
                sticks = sticks + 3;
                break;
            case 8:
                sticks = sticks + 7;
                break;
            case 9:
                sticks = sticks + 6;
                break;
            }
        }
        printf("%d\n", sticks);
    }
    return 0;
}

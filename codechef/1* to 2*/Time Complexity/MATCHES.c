#include <stdio.h>
//#include "codechef.c"
typedef int u5;
testcases()
{
    u5 t;
    scanf("%d",&t);
    return t;
}
int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 a, b, c;
        u5 count = 0, sticks = 0;
        //printf("Enter both the numbers: \n");
        scanf("%d %d", &a, &b);
        c = a + b;
        do
        {
            c /= 10;
            ++count;
        } while (c != 0);
        u5 d[count];
        c = a + b;
        for (int i = 0; i < count; i++)
        {
            d[i] = c % 10;
            c /= 10;
        }
        for (int i = 0; i < count; i++)
        {
            switch (d[i])
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

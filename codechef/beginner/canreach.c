#include <stdio.h>
int main()
{
    int T;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        int x, y, K, a, b;
        int count = 0;
        printf("Enter the number cordinates in x,y formaat and enter the step size: \n");
        scanf("%d %d %d", &x, &y, &K);
        if (x < 0)
            x = -1 * x;

        if (y < 0)
            y = -1 * y;

        for (int i = 1; i <= x; i++)
        {
            a = i * K;
            if (a == x)
                ++count;
        }
        for (int i = 1; i <= y; i++)
        {
            b = i * K;
            if (b == y)
                ++count;
        }
        if (count == 2)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0
}

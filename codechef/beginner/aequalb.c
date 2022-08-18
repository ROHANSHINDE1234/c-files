#include <stdio.h>

int main()
{
    int T;
    float a, b;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter the values of a and b: \n");
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            while (a > b)
            {
                b = b * 2;
            }
            if (a == b)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else if (a == b)
        {
            printf("Yes\n");
        }
        else
        {
            while (b > a)
            {
                a = a * 2;
            }
            if (a == b)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

    return 0;
}

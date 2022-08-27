#include <stdio.h>
int main()
{
    int T, c, f, a;

    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the number of candies and number of friends chef has: \n");
        scanf("%d %d", &c, &f);
        if (c % f == 0)
        {
            a = c / f;
            if (a % 2 == 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}

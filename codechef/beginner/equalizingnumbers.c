#include <stdio.h>

int main()
{
    int T, a, b, c;
    printf("Enter the number of test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter your two numbers: \n");
        scanf("%d %d", &a, &b);
        if (a == b)
        {
            printf("Yes\n");
        }
        else
        {
            if (a > b)
            {
                c = a - b;
                c = c / 2;
                a = a - c;
                b = b + c;
                if (a == b)
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
                c = b - a;
                c = c / 2;
                a = a + c;
                b = b - c;
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
    }

    return 0;
}

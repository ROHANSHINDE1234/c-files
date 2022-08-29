#include <stdio.h>

int main()
{
    int T, w, x, y, z;
    printf("Enter the number of test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the your weights: \n");
        scanf("%d %d %d %d ", &w, &x, &y, &z);
        if (w == x)
        {
            printf("yes\n");
        }

        else if (w == y)
        {
            printf("yes\n");
        }

        else if (w == z)
        {
            printf("yes\n");
        }

        else if (w == (x + y))
        {
            printf("yes\n");
        }
        else if (w == (y + z))
        {
            printf("yes\n");
        }
        else if (w == (z + x))
        {
            printf("yes\n");
        }
        else if (w == (x + y + z))
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }

    return 0;
}

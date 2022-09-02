#include <stdio.h>
int main()
{
    int T, P, C;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    int a[2];
    while (T--)
    {
        for (int i = 0; i < 3; i++)
        {
            scanf("%d %d", &P, &C);
            a[i] = P + C;
        }

        if ((a[0] > a[1]) && (a[0] > a[2]))
        {
            printf("%d\n", a[0]);
        }
        else if ((a[1] > a[2]) && (a[1] > a[0]))
        {
            printf("%d\n", a[1]);
        }
        else if ((a[2] > a[0]) && (a[2] > a[1]))
        {
            printf("%d\n", a[2]);
        }
    }

    return 0;
}

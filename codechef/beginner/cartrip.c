#include <stdio.h>
int main()
{
    int T, X;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the number of kilometers chef travelled: ");
        scanf("%d", &X);
        if (X <= 300)
        {
            printf("%d\n", 3000);
        }
        else
        {
            X = X - 300;
            X = X * 10;
            printf("%d\n", 3000 + X);
        }
    }

    return 0;
}

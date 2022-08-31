#include <stdio.h>
int main()
{
    int T, X, Y;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the number of weeks and cost per week: ");
        scanf("%d %d", &X, &Y);
        printf("%d\n", X * Y);
    }

    return 0;
}

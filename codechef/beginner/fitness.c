#include <stdio.h>
int main()
{
    int T, X;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the distance betweeen chefs home and office: ");
        scanf("%d", &X);
        printf("%d\n", X * 5 * 2);
    }

    return 0;
}

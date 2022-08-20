#include <stdio.h>

int main()
{
    int X, Y, A, T;
    printf("Enter the number of Test cases: ");
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        printf("Enter the value of Lower Higher and current age: \n");
        scanf("%d %d %d", &X, &Y, &A);
        if ((X <= A) && (A < Y))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}

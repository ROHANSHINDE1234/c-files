#include <stdio.h>

int main()
{
    int T, N;
    int sum = 1;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the number of elements in each array: \n");
        scanf("%d", &N);
        int a[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < N; i++)
        {
            sum = sum * a[i];
        }
        if (sum >= 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");            
        }
    }

    return 0;
}

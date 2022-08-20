#include <stdio.h>

int main()
{
    int T, N;
    printf("Enter the number of test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter the size of the integer: ");
        scanf("%d", &N);
        int a[N], b[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &b[i]);
        }

        int min = 1000;

        for (int i = 0; i < N; i++)
        {
            if (b[i] == 0)
            {
                if (a[i] < min)
                {
                    min = a[i];
                }
            }
        }
        printf("%d \n", min);
    }

    return 0;
}

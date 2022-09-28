#include <stdio.h>
int main()
{
    int T;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        int N, count = 0;
        printf("Enter the number of Students: \n");
        scanf("%d", &N);
        int a[N], b[N], c[N];
        printf("Enter the moments of time corresponding to each student: \n");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("Enter the amount of time required: \n");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < N; i++)
        {
            if (i == 0)
            {
                c[i] = a[i];
            }
            else
            {
                c[i] = a[i] - a[i - 1];
            }
        }

        for (int i = 0; i < N; i++)
        {
            if (c[i] >= b[i])
            {
                ++count;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}

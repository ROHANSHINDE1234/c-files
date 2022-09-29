#include <stdio.h>
int main()
{
    int T;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        int N, K;
        printf("Enter the number of Balls and number of Boxes: \n");
        scanf("%d %d", &N, &K);
        if (N < K)
        {
            printf("No\n");
        }
        else if (N == K)
        {
            if (N == 1)
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
            if (N>(2*K))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }   
    }
    return 0;
}

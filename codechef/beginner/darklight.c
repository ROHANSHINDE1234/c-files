#include <stdio.h>
int main()
{
    int T;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        int N, K;
        printf("The number of changes made in the levels and initial state of the torch: \n");
        scanf("%d %d", &N, &K);
        if (K == 0)
        {
            if (N == 4)
            {
                printf("Off\n");
            }
            else
            {
                printf("On\n");
            }
        }
        else
        {
            if (N == 0)
            {
                printf("On\n");
            }
            else
            {
                printf("Ambiguous\n");
            }
        }
    }

    return 0;
}

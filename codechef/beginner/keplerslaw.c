#include <stdio.h>
int main()
{
    int T;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        float T1, T2, R1, R2;
        printf("Enter the Time periods and Semi major axis of both the planets: \n");
        scanf("%f %f %f %f", &T1, &T2, &R1, &R2);
        T1 = T1 * T1;
        T2 = T2 * T2;
        R1 = R1 * R1 * R1;
        R2 = R2 * R2 * R2;
        if ((T1 / R1) == (T2 / R2))
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

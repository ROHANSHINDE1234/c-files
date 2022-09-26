#include <stdio.h>
int main()
{
    int T;
    printf("Enter the number of Test cases: ");
    scanf("%d", &T);
    while (T--)
    {
        int M, T1, T2, time;
        printf("Enter the number of moves and time left by both playes in end respectively: \n");
        scanf("%d %d %d", &M, &T1, &T2);
        time = ((2 * (180 + M)) - (T1 + T2));
        printf("Remaining time is %d seconds\n", time);
    }

    return 0;
}

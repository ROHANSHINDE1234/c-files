#include <stdio.h>
int main()
{
    int T, N, n;
    printf("Enter the number of Test cases: \n");
    scanf("%d", &T);
    while (T--)
    {
        int count = 0, countt = 0;
        printf("Enter your number here: \n");
        scanf("%d", &N);
        n = N;
        do
        {
            n /= 10;
            ++count;
        } while (n != 0);
        int a[count];
        for (int i = 0; i < count; i++)
        {
            a[i] = N % 10;
            N /= 10;
        }
        for (int i = 0; i < count; i++)
        {
            if (a[i] == 4)
            {
                ++countt;
            }
        }
        printf("%d\n", countt);
    }

    return 0;
}

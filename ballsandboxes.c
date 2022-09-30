#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long k, n, sum = 0;
        scanf("%ld%ld", &n, &k);

        sum = ((k + 1) * k) / 2;

        if (n == 1 && k == 1)
            printf("yes\n");
        else if (n == k && n == 1)
            printf("no\n");
        else if (k > n)
            printf("no\n");

        else if (n >= sum)
            printf("yes\n");
        else if (n < sum)
            printf("no\n");
    }
    return 0;
}

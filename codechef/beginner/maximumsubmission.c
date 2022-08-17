#include <stdio.h>
#include <conio.h>
int main()
{
    int T;
    printf("Enter your number of test cases: ");
    scanf("%d", &T);
    int a[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < T; i++)
    {
        int max;
        max = a[i] * 2;
        printf("You can do %d submission in %d minutes.\n", max, i + 1);
    }

    return 0;
}

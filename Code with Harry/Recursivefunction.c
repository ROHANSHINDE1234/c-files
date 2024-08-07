#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
int main()
{
    int a;
    printf("Enter the number you want the factorial of \n");
    scanf("%d", &a);
    printf("Number entered is %d and factorial is %d", a, factorial(a));
    return 0;
}

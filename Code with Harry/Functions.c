#include <stdio.h>

int sum(int a, int b); // With argument with return value

void printstar(int n); // With argument without return value

int takeanumber(); // Without argument with return value

int main()
{
    int a, b, c;
    a= 9;
    b= 87;
    // c = sum(a, b);
    // printstar(7);
    c = takeanumber();
    printf("The Entered number is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}

int takeanumber()
{
    int i;
    printf("Enter a number:");
    scanf("%d", &i);
    return i;
}
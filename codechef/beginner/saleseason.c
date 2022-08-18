#include <stdio.h>

int main()
{
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d",&T);
    int a[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < T; i++)
    {
        if ((0 < a[i]) & (a[i] <= 100))
        {
            printf("No discount: %d\n",a[i]);
        }
        else if ((100 < a[i]) & (a[i] <= 1000))
        {
            printf("Small discount: %d\n",a[i]-25);
        }
        else if ((1000 < a[i]) & (a[i] <= 5000))
        {
            printf("Average discount: %d\n",a[i]-100);
        }
        else if (5000 < a[i])
        {
            printf("Huge discount: %d\n",a[i]-500);
        }
        else
        {
            printf("Invlid input");
        }
        
    }
    
    return 0;
}
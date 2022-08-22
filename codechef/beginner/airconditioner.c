#include <stdio.h>

int main()
{
    int T, A, B, C;
    printf("Enter the number of test cases: ");
    scanf("%d",&T);

    while (T--)
    {
        printf("Enter Alice bob and charlie temperature requirnment: ");
        scanf("%d %d %d",&A,&B,&C);
        if ((B>A)&&(B>C))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        

    }
    
    return 0;
}

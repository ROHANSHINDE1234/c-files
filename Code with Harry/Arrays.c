#include <stdio.h>
int main()
{
    // int marks[4];
    int marks[2][4] = {{4,5,6,7},
                       {9,8,3,2}};
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the mrks of %d student\n", i+1);
    //     scanf("%d", &marks[i]);
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", marks[i][j]);
        }
        printf("\n");
        
    }
    
    // marks[0] = 34;
    // printf("Marks off student 1 is %d\n", marks[0]);
    // marks[0] = 23;
    // printf("Marks off student 1 is %d\n", marks[0]);
    return 0;
}

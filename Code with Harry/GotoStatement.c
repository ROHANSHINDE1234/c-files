#include <stdio.h>
int main()
{
    // printf("Hello World");
    int num;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Enter a number, Enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
            
        }
        
    }
    end:
    
    return 0;
}

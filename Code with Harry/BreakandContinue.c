#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age:\n", i);
        scanf("%d", &age);
        // if (age >10)
        // {
        //     break;
        // }
        if (age >10)
        {
            continue;
        }
        printf("We have not came across this\n");
        printf("We have not came across this\n");
        printf("We have not came across this\n");
        printf("We have not came across this\n");
        
    }
    
    return 0;
}

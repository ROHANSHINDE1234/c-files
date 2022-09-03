#include <stdio.h>
void printSorN(int a,int b)
{
    if (a>b)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
}
int main()
{
    int T, N, S, C, D;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);
    while (T--)
    {
        printf("Enter how many coins do each of them have: \n");
        scanf("%d %d %d %d", &N, &S, &C, &D);
        if (S > N)
        {
            N = N + C;
            if (S > N)
            {
                N = N + D;
                printSorN(S,N);
                
            }
            else
            {
                S = S + D;
                printSorN(S,N);
                
            }
        }
        else
        {
            S = S + C;
            if (S > N)
            {
                N = N + D;
                printSorN(S,N);
                
            }
            else
            {
                S = S + D;
                printSorN(S,N);
               
            }
        }
    }

    return 0;
}

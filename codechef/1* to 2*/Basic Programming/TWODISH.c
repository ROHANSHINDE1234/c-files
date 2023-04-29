#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,A,B,C;
        scanf("%d %d %d %d",&N,&A,&B,&C);
        if(B>=N)
        {
            A=A+C;
            if(A>=N)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            
        }
        else
        {
            printf("No\n");
        }
    }
	// your code goes here
	return 0;
}


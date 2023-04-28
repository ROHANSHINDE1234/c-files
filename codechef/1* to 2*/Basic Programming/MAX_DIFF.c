#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,S;
        scanf("%d %d",&N,&S);
        if(S<=N)
        {
            printf("%d\n",S);
        }
        else
        {
            S=S-N;
            N = N-S;
            printf("%d\n",N);
            
        }
    }
	// your code goes here
	return 0;
}


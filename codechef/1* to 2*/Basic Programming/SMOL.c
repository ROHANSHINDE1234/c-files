#include <stdio.h>

int main(void) {
    int T;
    scanf("%d\n",&T);
    while(T--)
    {
        int N, K;
        scanf("%d %d\n",&N,&K);
        if(K==0)
        {
            printf("%d\n",N);
        }
        else 
        {
            printf("%d\n",N%K);
        }
    }
    
	return 0;
}


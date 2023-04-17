#include <stdio.h>

int main(void) {
    int T;
    scanf("%d\n",&T);
    while(T--)
    {
        int N, K;
        scanf("%d %d\n",&N,&K);
        if(N<K)
        {
            printf("%d\n",N);
        }
        else 
        {
            int a;
            a = (N/K)*K;
            printf("%d\n",N-a);
        }
    }
    
	return 0;
}


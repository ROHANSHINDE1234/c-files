#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int w1,w2,x1,x2,M;
	    scanf("%d %d %d %d %d ",&w1,&w2,&x1,&x2,&M);
	    //int a = w2-w1;
	    if(((w2-w1)<(x1*M))||((w2-w1)>(x2*M)))
	    {
	        printf("0\n");
	    }
	    else
	    {
	        
	    }
	}
	return 0;
}


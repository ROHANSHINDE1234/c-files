#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N,X,S,R;
	    scanf("%d %d",&N,&X);
	    int a=0;
	    for(int i=1;i<=N;i++)
	    {
	        scanf("%d %d",&S,&R);
	        if(S<=X)
	        {
	            if(R>a)
	            {
	                a=R;
	            }
	        }
	    }
	    printf("%d\n",a);
	}
	return 0;
}

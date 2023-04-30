/*
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a=0,n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                a++;
            }
        }
        if(a%2==0)
        {
            printf("%d\n",n);
        }
        else
        {
            if(n%2==0)
            {
                printf("%d\n",n-2);
            }
            else
            {
                printf("%d\n",n-1);
            }
        }
    }
	// your code goes here
	return 0;
}
//*/
#include <stdio.h>

int main(void) {
	int T,N,sum;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    sum=N*(N+1)/2;
	    if(sum%2==0){
	        printf("%d\n",N);
	    }else{
	        printf("%d\n",N-1);
	    }
	}
	return 0;
}


#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    int count=n;
	    for(int j=0;j<n-1;j++)
	    {
	        if(a[j]==a[j+1])
	        {
	            count--;
	    }
	    }
	    printf("%d \n",count);
	}
	return 0;
}

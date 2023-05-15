#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n;
        scanf("%d %d",&x,&n);
        x=x/10;
        n=x*n;
        printf("%d\n",n);
    }
	// your code goes here
	return 0;
}


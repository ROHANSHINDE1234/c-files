#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(m<n)
        {
            printf("%d\n",n-m);
        }
        else
        {
            printf("0\n");
        }
    }
	// your code goes here
	return 0;
}


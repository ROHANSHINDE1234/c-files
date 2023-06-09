#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        if(x >= n)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
	// your code goes here
	return 0;
}


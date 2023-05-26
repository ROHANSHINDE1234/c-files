#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        x=x*4;
        if(x<=1000)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	// your code goes here
	return 0;
}


#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a=a+b;
        if(a>6)
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


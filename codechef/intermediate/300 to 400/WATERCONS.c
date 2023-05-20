#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        if(a>=2000)
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


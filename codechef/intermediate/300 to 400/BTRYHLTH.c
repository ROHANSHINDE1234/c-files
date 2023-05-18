#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x>=80)
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


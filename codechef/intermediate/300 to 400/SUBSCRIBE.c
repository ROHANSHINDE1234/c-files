#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        if(a<=30)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
	// your code goes here
	return 0;
}


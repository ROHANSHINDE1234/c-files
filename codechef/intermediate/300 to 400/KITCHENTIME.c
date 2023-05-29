#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a=b-a;
        printf("%d\n",a);
    }
	// your code goes here
	return 0;
}


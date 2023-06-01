#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d %d %d",&x,&y,&z);
        x=x*5;
        y=y*10;
        x=x+y;
        x=x/z;
        printf("%d\n",x);
    }
	// your code goes here
	return 0;
}


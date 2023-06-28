#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d %d",&a,&b);
    int c;
    c=a*b;
    a=a+b;
    c=c-a;
    if(c<0)
    {
        c=c*-1;
    }
    printf("%d",c);
	// your code goes here
	return 0;
}


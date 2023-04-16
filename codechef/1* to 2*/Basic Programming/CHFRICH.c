#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
	int A,B,X;
	scanf("%d %d %d",&A,&B,&X);
	printf("%d\n",(B-A)/X);
    }
    return 0;
}


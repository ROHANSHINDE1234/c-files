#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    N = (N/2) +1;
	    printf("%d\n",N);
	}
	return 0;
}


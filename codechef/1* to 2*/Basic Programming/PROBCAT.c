#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int x;
	    scanf("%d",&x);
	    if((1<=x)&&(x<100))
	    {
	        printf("Easy\n");
	    }
	    else if((100<=x)&&(x<200))
	    {
	        printf("Medium\n");
	    }
	    else
	    {
	        printf("Hard\n");
	    }
	}
	return 0;
}


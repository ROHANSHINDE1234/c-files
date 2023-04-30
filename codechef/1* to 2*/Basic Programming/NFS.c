#include <stdio.h>
#include <math.h>
int main(void) {
	int t,u,v,a,s;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&u,&v,&a,&s);
	    if((u*u)-2*a*s<=(v*v))
	    {
	        printf("Yes \n");
	    }
	    else 
	    {
	        
	        printf("No \n");
	    }
	   
	}
	return 0;
}


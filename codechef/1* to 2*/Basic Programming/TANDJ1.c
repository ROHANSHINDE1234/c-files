#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d,k;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        if(a>c)
        {
            a=a-c;
        }
        else
        {
            a=c-a;
        }
        //printf("Value of a %d\n",a);
        if(b>d)
        {
            b=b-d;
        }
        else
        {
            b=d-b;
        }
        //printf("Value of b %d\n",b);
        a=a+b;
        //printf("Steps needed %d\n",a);
        if((k>=a)&&((k-a)%2==0))
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


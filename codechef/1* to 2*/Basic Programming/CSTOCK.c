#include <stdio.h>

int main(void) {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        float s,a,b,c;
        scanf("%f %f %f %f",&s,&a,&b,&c);
        //c=s*(c/100)
        s=s+(s*(c/100));
        if((s>=a)&&(s<=b))
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


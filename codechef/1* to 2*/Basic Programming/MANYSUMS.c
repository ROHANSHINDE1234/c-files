/*
#include <stdio.h>

int main(void) {
    int t,a=1;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        
        scanf("%d %d",&l,&r);
        int len = r-l + 1,sum=0;
        //printf("value of len is %d\n",len);
        if(l==r)
        {
            printf("%d\n",a);
        }
        else
        {
            for(int i =len;i>=1;i--)
            {
                sum = sum + i;
            }
            printf("%d\n",sum);
        }
        
    }
	// your code goes here
	return 0;
}

//*/
#include <stdio.h>

int main(void) {
    int t,s,l,r;
    scanf("%d \n",&t);
    while(t--)
    {
        scanf("%d %d\n",&l,&r);
        s=r-l;
        s=(2*s)+1;
        printf("%d \n",s);
        
    }
	return 0;
}


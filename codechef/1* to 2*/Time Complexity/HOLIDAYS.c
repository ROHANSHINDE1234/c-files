#include <stdio.h>

int main(void) {
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,w,temp=0;
        scanf("%d %d",&n,&w);
        int a[n];
        for(int i =0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i =0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    temp = a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        temp=0;
        for(int i=0;i<n;i++)
        {
            if(a[0]<w)
            {
                i=i+1;
                a[0]=a[0]+a[i];
                ++temp;
            }
        }
        printf("%d\n",n-temp);
    }
	// your code goes here
	return 0;
}
/*
What I understood
see after chef takes different number of testcases
He takes number of days and total money to be collected
In next line he take total number of money on individual day which can be
earned.
we need to find least number of working days required todo job to 
maximize the holiday.

What can be done
we can first arrange all the inputs in the sencond line in decending order
and then keep adding till it becomes equal to or greater than total money
so the second phase is easy jusst put a for loop and a if loop
or use a while loop and put condition as if addition >= total money

What I don't know
I don't know how to put numbers in decending order

How to do
we can just start from the 2 number and compare it with its left digit 
or digits and find greatest and push it at right end.
*/

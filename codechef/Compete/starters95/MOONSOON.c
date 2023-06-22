#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,h;
        scanf("%d %d %d",&n,&m,&h);
        int a[n],b[m],temp=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++)
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
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                if(b[i]<b[j])
                {
                    temp = b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            b[i]=b[i]*h;
        }
        int max=0;
        if(n<m)
        {
            max=n;
        }
        else
        {
            max = m;
        }
        int count=0;
        for(int i=0;i<max;i++)
        {
            if(a[i]<b[i])
            {
                count = count + a[i];
            }
            else
            {
                count = count + b[i];
            }
        }
        printf("%d\n",count);
    }
	// your code goes here
	return 0;
}
/*
What we need to find out 
Total energy that can be stored in the cars

What steps need to be taken
Carefully take all the inputs
After taking number of test cases
In next line take number of cars, number of outlets, total hours
In next line give the capacity of all the cars
In next line give the capacity of all the outlets

What should be the first move 
we can directly multiply the outlets  * number of hours
to get maximum capacity of all the outlets
then after we arrange then in decreasing order both cars capacity 
and outlets
we will check which car is suitable for which outlet 
then add the total number of energy stored.

*/

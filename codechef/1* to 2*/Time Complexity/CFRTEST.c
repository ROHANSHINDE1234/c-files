#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
	for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    ++count;
                    break;
                }
            }
        }
        printf("%d\n",n-count);
        
        
    }
	// your code goes here
	return 0;
}

/* 
What I understood in the problem
chef can give only one party at a time
after taking number of testcases as input for each test case we will give
number of friends chef has
in second line it will contain how many of those want their party at 
what day

What to do
Just check how many distint number of days his friends have opted
If all the input numbers in the 2 input are different then print n
or else subtract the number from the sum total.

Where I have stuck 
I don't know how to find out total number of distint numbers from 
an array.

What I started to do
Firstly i have taken all the required data from the user 
then to find distint number from the numbers wich user entered in 2 line
we will compare 1 number with all next numbers and repeat the process

*/

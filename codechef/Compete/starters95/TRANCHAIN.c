#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,chain,A,B;
        scanf("%d",&n);
        char b[n];
        b[n] = getchar();
        //gets(b);
        for(int i;i<n;i++)
        {
            if(b[i]== 'O')
            {
                ++chain;
            }
            if(b[i]== 'AB')
            {
                ++chain;
            }
            if(b[i]== 'A')
            {
                ++A;
            }
            if(b[i]== 'B')
            {
                ++B;
            }
            
        }
        if(A>B)
        {
            chain = chain +A;
        }
        else
        {
            chain = chain +B;
        }
        printf("%d\n",chain);
    }
	// your code goes here
	return 0;
}
/*
What i understood
After A only A and AB can come
After B only B and AB can come
After AB only AB can come
After O A,B,AB,O can come

We need to maximise the string
We will count number of O in the string and increment a variable
Then individually calculate A and B 
After checking which one is bigger We will increment the variable 
by that number
Then at last we will count AB and add it to our varible and print 
final answer
*/

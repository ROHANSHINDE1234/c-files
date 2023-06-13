#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t); // Takes total number of test cases to be performed
    while(t--)
    {
        int n;
        scanf("%d",&n); // Takes the size of individual arrays
        int a[n];  // Declares the array
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);  // Takes the values of individual elements of array
        }
	int predefined=0;
	    int loop=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
                //printf("%d\n",i);
	            if(a[i]==a[j])
	            {
                    //printf("%d\n",j);
                    printf("Hi\n");
	                ++loop;
	            }
	        }
	        if(loop>predefined)
	        {
	            predefined = loop;
	        }
	            
	    }
	    printf("%d\n",predefined);
    }
	// your code goes here
	return 0;
}
/*
What I understood 
First take input for number of test cases put it in while loop 
Took total number of elements we will have in that array
then systematically took all the elements of that array
Then I need to make all the elements of the array equal 
for that i need to select what all number of the array are repeted the most
then our final answer will be total length of array minus number of times 
most repeted number.

What I didn't understood
How will i get how many times that a particular number is repeated.

Solution
Try to compare single number with every digit

How will I do it
If I take first number and by putting it in loop by comaparing with other elements 
Add a if statement in that and increment a parameter
predefine a number before to 0 
at each and every iteration comapre this number with our incremented value
if incremented value s greater then put incremented value in predefined number
then repeat it for every number
then subtract this number with length of the array

*/

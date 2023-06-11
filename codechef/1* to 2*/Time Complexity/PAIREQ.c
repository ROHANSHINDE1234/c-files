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
	int max = 0;//small change
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

*/

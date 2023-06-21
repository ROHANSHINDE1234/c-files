#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x<=3)
        {
            printf("BRONZE\n");
        }
        else if((x>3)&(x<=6))
        {
            printf("SILVER\n");
        }
        else
        {
            printf("GOLD\n");
        }
    }
	// your code goes here
	return 0;
}
/*
What to do
After taking number of test cases 
Take a number as input then 
if it is x<=3 print bronze
if it is 3<x<=6 print silver
if it is 6<x print gold
*/

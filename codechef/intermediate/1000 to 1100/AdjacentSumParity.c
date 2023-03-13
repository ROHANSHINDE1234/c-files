/*
Question is crystal clear
A is an given array and B is formed by adding A's that particular i value with i+1 % with 2
we are givem B and need to decide wether A exist or not.
1) First we will take user define input 
2) Got to know that if % 2 is going to happen then input will be either 0 or 1.
3) Try different combinations of even and odd numbers to find out which 1 & 0 is not possible.
4) Then code accordingly. // 09/03/2023
5) Different cases in which it is not possible is 10 and 100 according to the problem given.
6) For now I have intially decided that 1 followed by single 0 or 1 followed by two zero's 
   combination is not possible // 12/03/23
7) Looked at solution s way complicated. // 13/03/23

*/
#include<stdio.h>
#include"codechef.h"
int main()
{
    u5 T=testcases();
    while (T--)
    {
        u5 ipary[1];
        inputarray(ipary,1);
        u5 ipary1[ipary[0]];
        inputarray(ipary1,ipary[0]);
        for (u5 i = 0; i < ipary[0]; i++)
        {
            if (ipary1[i]==1)
            {
                
            }
            
        }
        
    }
    
    return 0;
}

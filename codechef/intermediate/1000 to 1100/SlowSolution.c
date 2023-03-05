#include <stdio.h>
#include "codechef.h"

int main()
{
    u5 T = testcases();
    while (T--)
    {
        u5 ipary[3],a=0;
        inputarray(ipary, 3);
        while (ipary[0]-- && ipary[2] > 0)
        {
            if (ipary[2] > ipary[1])
            {
                a = a + ipary[1] * ipary[1];
                ipary[2] = ipary[2] - ipary[1];
            }
            else
            {
                a = a + ipary[2];
                ipary[2] = 0;
            }
        }
        printf("%d\n", a);
    }
    return 0;
}
/*
chef takes 3 inputs
still understanding question
still understanding question
find n2 of n and compare it with t
chef is given a number 
chefs algorithm takes NxN values for the specific test case
means out of maxt maxn and sumn we have to first see how we can add maxn to get sumn then square all the maxn terms

*/

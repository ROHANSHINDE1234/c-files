#include "codechef.h"

/***************************LOOPS WHICH WILL BE USED IN OUR PROGRAMS*************************/

/*
1)To print the given array
2)Reverse the given array
3)To convert a Interger Number into ARRAY Format
4)Take a array input
5)Take matrix input
6)Take sum till n numbers
7)To count digits of an integer
8)Sum of elements of an array
9)Check if a number is repeated or not in an array
10)Swapping pairs of a string
11)Using atbashCipher replacing A with Z & replacing a with z.
*/

/************************************To print the given array*********************************/ 

void printingarray(u32 *array,u32 n){
    printf("[ ");
    for (u32 i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
    printf("]\n");
}

/************************************Reverse the given array*********************************/

int reversingarray(u32 *array, u32 n)
{
    u32 temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

/************************To convert a Interger Number into ARRAY Format**********************/

int intconverttoarray(u32 *array, u32 count, u32 n)
{
    for (int i = 0; i < count; i++)
    {
        array[i] = n % 10;
        n /= 10;
    }
}

/************************************Take a array input**************************************/

int inputarray(u32 *array,u32 n)
{
    for (u32 i = 0; i < n; i++)
    {
        printf("Enter your %d element\n",i+1);
        scanf("%d",&array[i]);
    }
    
}

/************************************Take a array matrix**************************************/

u32 inputmatrix(u32 *matrix, u32 n, u32 m)
{
    for (u5 i = 0; i < n; i++)
    {
        for (u32 j = 0; j < m; j++)
        {
            scanf("%d", &matrix);
        }
    }
}

/************************************Sum of given number**************************************/

u32 sumofnnumbers(u32 a)
{
    u32 sum = 0;
    for (u32 i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    return sum;
}

/*********************************To count digits of an integer******************************/

u32 countdigits(u32 a, u32 count)
{
    do
    {
        a /= 10;
        ++count;
    } while (a != 0);
    return count;
}

/*********************************Sum of elements of an array******************************/

u32 arraysum(u32 *array, u32 n)
{
    u32 temp = 0;
    for (u32 i = 0; i < n; i++)
    {
        temp = temp + array[i];
    }
    return temp;
}

/*********************************Check if a number is repeated or not in an array******************************/

bool checkrepeat(u32 *array,u32 n)
{
    for(u32 i=0;i<n;i++)
    {
        u32 repeat =0;
        for(u32 j=0;j<n;j++)
        {
            if(array[i]==array[j])
            {
                repeat++;
                if(repeat >2)
                {
                    return true;
                }
            }
        }
        
    }
    return false;
}
/*********************************Swapping pairs of a string******************************/

void swapCharPairs(u1 *string, u32 n)
{
    for (int i = 0; i < n - 1; i = i + 2)
    {
        char temp = string[i];
        string[i] = string[i + 1];
        string[i + 1] = temp;
    }
}
/*********************************Using atbashCipher replacing A with Z & replacing a with z.******************************/

void atbashCipher(u1 *string,u32 n,u32 upperlower)
{
    if(upperlower)
    {
        for (int i = 0; i < n; i++)
        {
            string[i] = (90 - string[i] + 65);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            string[i] = (122 - string[i] + 97);
        }
    }
}

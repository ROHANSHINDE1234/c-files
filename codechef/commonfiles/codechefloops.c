#include "codechef.h"

/***************************LOOPS WHICH WILL BE USED IN OUR PROGRAMS*************************/

/*
1)To print the given array
2)Reverse the given array
3)To convert a Interger Number into ARRAY Format
4)Take a array input
5)To count digits of an integer
6)
*/

/*------------------------------------------------------------------------------------------*/

/****************************************FOR LOOPS*******************************************
*****************************All For loops are in this section*******************************/ 


/************************************To print the given array*********************************/ 

void printingarray(u5 *array,u5 n){
    printf("[ ");
    for (u5 i = 0; i < n; i++){
        printf("%d ",array[i]);
    }
    printf("]\n");
}

/************************************Reverse the given array*********************************/

int reversingarray(u5 *array, u5 n)
{
    u5 temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

/************************To convert a Interger Number into ARRAY Format**********************/

int intconverttoarray(u5 *array, u5 count, u5 n)
{
    for (int i = 0; i < count; i++)
    {
        array[i] = n % 10;
        n /= 10;
    }
}

/************************************Take a array input**************************************/

int inputarray(u5 *array,u5 n)
{
    for (u5 i = 0; i < n; i++)
    {
        printf("Enter your %d element\n",i+1);
        scanf("%d",&array[i]);
    }
    
}

/*************************************do while LOOPS******************************************
*****************************All do while loops are in this section**************************/

/*********************************To count digits of an integer******************************/

int countdigits(u5 a, u5 count)
{
    do
    {
        a /= 10;
        ++count;
    } while (a != 0);
    return count;
}

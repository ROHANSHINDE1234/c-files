#include <stdio.h>
# include <conio.h>

# include "mergeh.h"
# include "mergefunctions.c"

int main()
{
    
    int n;
    printf("Enter the length of an array: ");
    scanf("%d",&n);
    int A[n];
    for (int i = 0; i < n; i++){
        printf("Enter the %d element ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Your entered Array is: ");
    
    printArray(A, n);
    mergeSort(A, 0, n-1);
    printf("Your Array after sorting using merge sort is: ");
    printArray(A, n);
    return 0;
}
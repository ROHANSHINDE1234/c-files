#ifndef __mergeh_h__
#define __mergeh_h__

typedef short int s16;

void printArray(int *A, s16 n);
void merge(int A[], s16 mid, s16 low, s16 high);
void mergeSort(int A[], s16 low, s16 high);

#endif
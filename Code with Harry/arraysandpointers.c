#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};
    printf("The address of the first element of the array is %d\n", &arr[0]);
    printf("The address of the first element of the array is %d\n", arr);
    printf("The address of the second element of the array is %d\n", &arr[1]);
    printf("The address of the first element of the array is %d\n", arr + 1);
    // arr++; // This line will throw error

    printf("The value at address of the first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of the first element of the array is %d\n", *(arr));
    printf("The value at address of the second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of the first element of the array is %d\n", *(arr + 1));

    return 0;
}

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 345; // Value chaged here gets refeleted in main as address gets passed into the function

    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 1234;
}

void func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i, j, array[i][j]);
        }
    }
}

int main()
{
    int arr[] = {23, 13, 3, 4};
    int arr2[][2] = {{1, 2}, {3, 4}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr2);

    return 0;
}

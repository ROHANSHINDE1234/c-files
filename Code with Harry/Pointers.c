#include <stdio.h>
int main()
{
    // printf("Lets learn bout pointers");
    int a = 7;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %d\n", &a);
    printf("The address of a is %d\n", ptra);
    printf("The address of some garbage is %d\n", ptr2);
    printf("The Value of a is %d\n", *ptra);
    printf("The Value of a is %d\n", a);
    return 0;
}

#include <stdio.h>
void Increment(int a) // Call by value
{
    a = a + 1;
    printf("Address of a in Increment is %d\n", &a);
}
void Increment1(int *p) // Call by reference
{
    *p = *p + 1;
}
int main()
{
    /* 1
    int a;
    int *p;
    a = 5;
    p = &a; //&a = address of a
    printf("%d\n", p);
    printf("%d\n", *p); // *p - value at address pointed by p
    printf("%d\n", &a); //  & - gives the addres of that variable
    *p = 10;            // Value at addresss pointed by p is 10 DEREFERENCING
    printf("%d\n", *p); // *p - value at address pointed by p
    int b = 20;
    *p = b;
    printf("%d\n", p);
    printf("%d\n", *p); // *p - value at address pointed by p
    //*/
    /* 2
    // Pointer Arithmetic
    printf("%d\n", p);
    printf("%d\n", p + 1);
    printf("%d\n", p + 2);
    printf("%d\n", *(p));
    printf("%d\n", *(p + 1));
    //*(p + 2) = 4;
    printf("%d\n", *(p + 2));
    //*/
    /* 3
    // Pointer types, void pointer, pointer arithmetic
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is %d bytes \n", sizeof(int));
    printf("Address = %d, value = %d\n", p, *p);
    char *p0;
    p0 = (char *)p; // Typecasting
    printf("Size of char is %d bytes \n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);           // 1025 = 00000000 00000000 00000100 00000001
    printf("Address = %d, value = %d\n", p0 + 1, *(p0 + 1)); // As second byte is 4
    // As the int is of 4 byte nd char is of 1 byte so only 1 byte is used therefore output came 1;
    printf("Address = %d, value = %d\n", (p + 1), *(p + 1));

    // Void pointer
    void *p1;
    p1 = p;
    printf("Address = %d %d", p1); // Cannot dereference void pointer
    //*/
    /* 4
    // Pointer to Pointer
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", **q);
    printf("%d\n", *r);
    printf("%d\n", **r);
    printf("%d\n", ***r);
    ***r = 10;
    printf("%d\n", x);
    **q = *p + 2;
    printf("%d\n", x);
    //*/
    /*5
    // Pointers as function arguments - Call by Reference
    int a;
    a = 10;
    Increment(a);
    printf("Address of a in main is %d\n", &a);
    printf("%d\n", a);
    Increment1(&a);
    printf("Address of a in main is %d\n", &a);
    printf("%d\n", a);
    //*/
}
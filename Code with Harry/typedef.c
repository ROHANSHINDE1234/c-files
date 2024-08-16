#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    // int *a, b;
    typedef int *intpointer;
    intpointer a, b;
    int c = 89;
    a = &c;
    b = &c;
    // b = c;

    // struct Student s1, s2;
    // std s1, s2;
    // s1.id = 56;
    // s2.id = 89;
    // printf("The value of s1's id is %d\n", s1.id);
    // printf("The value of s2's id is %d\n", s2.id);

    // typedef <previous_name> <alias name>
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    return 0;
}

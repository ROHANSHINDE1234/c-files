#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} Rohan, ravi, shubham;
// struct Student Rohan, ravi, shubham;

void print()
{
    printf("%s", Rohan.name);
}

int main()
{

    Rohan.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    // printf("Rohan's id is %d\n", Rohan.id);
    strcpy(Rohan.name, "Rohan Sanjay Shinde");
    // printf("Rohan's name is: %s\n", Rohan.name);
    print();

    return 0;
}

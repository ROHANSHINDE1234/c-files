#include <stdio.h>
#include <string.h>

// struct Student
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    // struct Student s1;
    union Student s1;
    s1.id =1;
    
    strcpy(s1.name ,"Rohan");
    s1.fav_char ='u';
    s1.marks =45;
    
    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav_char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);

    
    return 0;
}

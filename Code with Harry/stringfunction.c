#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Rohan";
    char s2[] = "Shinde";
    char s3[54];
    // puts(strcat(s1,s2));
    // printf("The length of s1 and s2 is %d %d", strlen(s1),strlen(s2));
    // printf("Reverse string s1 is :\n");
    // puts(strrev(s1));
    // printf("Reverse string s2 is :\n");
    // puts(strrev(s2));
    // s3=strcat(s1,s2);// e    rror
    // strcpy(s3, strcat(s1, s2));
    // puts(s3);
    printf("The strcmp for s1, s2 returned %d", strcmp(s1, s2));

    return 0;
}

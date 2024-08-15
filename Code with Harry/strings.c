#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'R', 'o', 'h', 'a', 'n', '\0'};
    // char str[] = {'R', 'o', 'h', 'a', 'n'}; // generates a garbage value at end
    // char str[] = "Rohan";
    char str[34];
    gets(str);
    printf("Using custom function printstr: \n");
    printstr(str);
    printf("\n");
    printf("Using printf \n%s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}

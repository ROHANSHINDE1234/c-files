#include <stdio.h>
int main()
{
    int a = 3;
    int *ptra = &a;
    printf("%d\n", ptra);
    printf("%d\n", ptra+2);
    return 0;
}

/* Interchage two numbers */
/* Auther : Rohan S Date : 17/10/2024 */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Your entered numbers are %d, %d", a, b);
    return 0;
}

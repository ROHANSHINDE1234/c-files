/* Calculation of gross salary */
/* Auther : Rohan S Date : 14/10/2-24 */

#include <stdio.h>
int main()
{
    float BS, DA, HR;
    printf("Enter the Basic salary: \n");
    scanf("%f", &BS); // Remember to write the below formula's after we take input variable.
    DA = 0.4 * BS;
    HR = 0.2 * BS;
    printf("%f\n", BS + DA + HR);
    return 0;
}

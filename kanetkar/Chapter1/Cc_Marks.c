/* Find the aggregate and percentage marks obtained by the student */
/* Auther : Rohan S Date : 16/10/2-24 */

#include <stdio.h>
int main()
{
    float M1, M2, M3, M4, M5, agg, percent;
    printf("Enter the mark's obtained by the student in 5 differen subjects :\n");
    scanf("%f %f%f %f %f", &M1, &M2, &M3, &M4, &M5);
    if ((M1 <= 100) && (M2 <= 100) && (M3 <= 100) && (M4 <= 100) && (M5 <= 100))
    {
        printf("Your aggregate marks are :- %f ", M1 + M2 + M3 + M4 + M5);
        printf("Percentage obtained is :- %f", (M1 + M2 + M3 + M4 + M5) / 5);
    }
    else
    {
        printf("You entered marks which is out of the maximum marks obtained (100)");
    }
    return 0;
}

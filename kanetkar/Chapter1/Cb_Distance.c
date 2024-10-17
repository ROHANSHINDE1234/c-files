/* Calculation of distance */
/* Auther : Rohan S Date : 15/10/2-24 */

#include <stdio.h>
int main()
{
    float D_km, D_m, D_f, D_inch, D_cm;
    printf("ENter the distance in Kms: \n");
    scanf("%f", &D_km);
    printf("Distance in meters is %f \n", 1000 * D_km);
    printf("Distance in feet is %f \n", 3280.84 * D_km);
    printf("Distance in centimeter is %f \n", 100000 * D_km);
    printf("Distance in inches is %f \n", 39370.1 * D_km);
    return 0;
}

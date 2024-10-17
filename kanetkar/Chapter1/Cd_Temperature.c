/* Convert temperature from fahrenheit to centigrade */
/* Auther : Rohan S Date : 17/10/2-24 */

#include <stdio.h>

int main()
{
    float fah, cent, a, b;
    a = 32;
    b = (float)5 / 9;

    printf("Enter the temperature in Fahrenheit degrees: \n");
    scanf("%f", &fah);
    cent = ((b) * (fah - 32));
    printf("Temperature in Centigrade degree is: %f", cent);
    return 0;
}

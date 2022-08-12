#include <stdio.h>
#include <conio.h>
#include <math.h>

#include "powerh.h"
#include "powerfunctions.c"

int main()
{
    f32 voltage, current, phase_angle ,a , Active_power, Reactive_power, apparent_power, power_factor ;
    printf("Enter the value of voltage :\n");
    scanf("%f",&voltage);

    printf("Enter the value of current :\n");
    scanf("%f",&current);

    printf("Enter the value of phase_angle :\n");
    scanf("%f",&phase_angle);
    if (100.0 <= voltage && voltage <= 300.0 && 0.0 <= phase_angle && phase_angle <= 360.0 && 0.001 <= current && current <= 6.000)
    {
        a = conversion(phase_angle);
        printf("Active_power is %f kw\n", voltage*current*cos(a));
        printf("Reactive_power is %f kvar\n", voltage*current*sin(a));
        printf("apparent_power is %f kva\n", voltage*current);
        printf("power_factor is %f\n", cos(a));
        
    }
    else{
        printf("Yours values are out of range");

    }

    

    return 0;
}

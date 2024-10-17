/* Find Cost price of one item */
/* Auther : Rohan S Date : 17/10/2024 */

#include <stdio.h>
int main()
{
    float Total_SP, Total_profit, Unit_CP;
    printf("Enter the total SP and Total profit: \n");
    scanf("%f %f", &Total_SP, &Total_profit);
    Total_SP = Total_SP / 15;
    Total_profit = Total_profit / 15;
    Unit_CP = Total_SP - Total_profit;
    printf("Cp of one unit is %f: \n", Unit_CP);
    return 0;
}

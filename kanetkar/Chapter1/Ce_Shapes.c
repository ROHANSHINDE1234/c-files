/* Calculate area and perimeter of circle and rectangle */
/* Auther : Rohan S Date : 17/10/2-24 */

#include <stdio.h>
int main()
{
    float length, breadth, radius, rec_per, rec_area, cir_per, cir_area;
    printf("Enter the Length and breadth of rectangle and radius of the circle: \n");
    scanf("%f %f %f", &length, &breadth, &radius);
    rec_per = 2 * (length + breadth);
    rec_area = (length * breadth);
    cir_per = 2 * 3.14 * radius;
    cir_area = 3.14 * (radius * radius);
    printf("Perimeter and Area of the rectangle is %f, %f.\n", rec_per, rec_area);
    printf("Perimeter and Area of the circle is %f, %f.\n", cir_per, cir_area);

    return 0;
}

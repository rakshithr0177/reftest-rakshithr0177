#include <stdio.h>
int main()
{
    float base, altitude, area;
    printf("Enter base and alititude\n");
    scanf("%f%f", &base, &altitude);
    area = 0.5 * base * altitude;
    printf("Area of the triange with base %f and altitude %f is %f\n", base, altitude, area);
    return 0;
}

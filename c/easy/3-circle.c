#include <stdio.h>
#include<math.h>


int main(void)
{
    const float PI = 3.14;
    int radius = 0; 
    float diameter, circumference, area = {0};
    printf("Input the radius of the circle: ");
    scanf("%d", &radius);

    // radius == C / (2*pi)
    // area == PI * radius^2
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);
    printf("Diameter: %.2f Units\n", diameter);
    printf("Circumference: %.2f Units\n", circumference);
    printf("Area: %.2f sq units\n", area);
}
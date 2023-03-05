#include <stdio.h>

int main(void)
{
    int base = 0, height = 0;
    float area = 0;

    printf("Enter base of the triangle: ");
    scanf("%d", &base);
    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    area = (base * height) / 2;
    printf("Area of the triangle = %.2f sq. units\n", area);

}
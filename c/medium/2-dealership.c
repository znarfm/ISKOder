#include <stdio.h>

int main(void)
{
    int car = 0, tricycle = 0, motorcycle = 0, wheels = 0;
    printf("Enter number of (cars, tricycles, motorcycles): ");
    scanf("%d %d %d", &car, &tricycle, &motorcycle);

    wheels = (4 * car) + (3 * tricycle) + (2 * motorcycle);
    printf("Total number of wheels = %d", wheels);
}
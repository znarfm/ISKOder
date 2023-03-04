#include <stdio.h>

int main(void)
{
    int number = 0, square = 0, cube = 0;
    printf("Enter any number to find square and cube: ");
    scanf("%d", &number);

    square = number * number;
    cube = square * number;

    printf("SQUARE(%d) = %d\n", number, square);
    printf("CUBE(%d) = %d", number, cube);
}
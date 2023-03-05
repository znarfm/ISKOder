#include <stdio.h>

int main(void)
{
    int num1, num2, sum = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    for (int i = 0; i < num1; i++)
    {
        sum++;
    }
    for (int i = 0; i < num2; i++)
    {
        sum++;
    }
    printf("Sum of the two numbers: %d", sum);
}
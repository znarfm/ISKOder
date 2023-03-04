#include <stdio.h>

int isEven(int number);

int main(void)
{
    // Variables
    int num = 0, i, total = 0;

    // Ask for a number
    printf("Input a number: ");
    scanf("%d", &num);

    // Main algo
    if (isEven(num) == 1)
    {
        for (i = 0; i < num; i++)
        {
            if (isEven(i) == 0)
            {
                total += i;
            }
        }
    }
    else
    {
        for (i = 0; i < num; i++)
        {
            if (isEven(i) == 1)
            {
                total += i;
            }
        }
    }
    printf("Sum: %d", total);
}

// Parity Check function
int isEven(int number)
{
    if (number % 2 == 0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
#include <stdio.h>

int main(void)
{
    for (int i = 100; i > 1; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}
// A program that converts seconds into HH:MM:SS

#include <stdio.h>

int main(void)
{
    int seconds, hours, minutes, out_seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    out_seconds = (seconds % 3600) % 60;

    if (hours > 9) // double digit hr
    {
        printf("%d seconds is equivalent to %01d:%02d:%02d", seconds, hours, minutes, out_seconds);
    }
    else // single digit hr
    {
        printf("%d seconds is equivalent to %02d:%02d:%02d", seconds, hours, minutes, out_seconds);
    }
    return 0;
}
#include <stdio.h>

int main(void)
{
    int days, years, weeks, daysleft = {0};
    printf("Enter the days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    daysleft = ((days % 365) % 7);

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", daysleft);
}
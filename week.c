#include <stdio.h>
int main()
{
    int week_day;
    printf("enter day number");
    scanf("%d", &week_day);
    if (week_day == 1)
    {
        printf("monday");
    }
    if (week_day == 2)
    {
        printf("tuesday");
    }
    if (week_day == 3)
    {
        printf("wednesday");
    }
    if (week_day == 4)
    {
        printf("thurssday");
    }
    if (week_day == 5)
    {
        printf("friday");
    }
    if (week_day == 6)
    {
        printf("saturday");
    }
    if (week_day == 7)
    {
        printf("sunday");
    }
    if (week_day > 7)
    {
        printf("enter a valid day number");
    }
    return 0;
}
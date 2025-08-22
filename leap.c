#include <stdio.h>
int main()
{
    int year;
    printf("Enter year");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("it is a leap year");
        }
        if (year % 400 != 0)
        {
            printf("it is a non leap year");
        }
    }
    if (year % 100 != 0)
    {
        if (year % 4 == 0)
        {
            printf("it is a leap year");
        }
        if (year % 4 != 0)
        {
            printf("it is not a leap year");
        }
    }
    return 0;
}

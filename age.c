#include <stdio.h>
int main()
{

    int d1, d2, y1, y2, m1, m2, days, months, years;
    printf("enter your birthdate as (d m y) with spaces ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("enter current date similarly");
    scanf("%d %d %d", &d2, &m2, &y2);
    if (y2 > y1)
    {
        if (d2 > d1 && m2 > m1)
        {
            days = d2 - d1;
            months = m2 - m1;
            years = y2 - y1;
            printf("Your current age is %d years %d months %d days", years, months, days);
        }
        else if (d2 < d1 && m2 > m1)
        {
            days = (d2 + 30) - d1;
            months = (m2 - 1) - m1;
            years = y2 - y1;
            printf("Your current age is %d years %d months %d days", years, months, days);
        }
        else if (d2 > d1 && m2 < m1)
        {
            days = d2 - d1;
            months = (m2 + 12) - m1;
            years = (y2 - 1 - y1);
            printf("Your current age is %d years %d months %d days", years, months, days);
        }
        else if (d2 < d1 && m2 < m1)
        {
            days = (d2 + 30) - d1;
            months = (m2 + 12 - 1) - m1;
            years = (y2 - 1 - y1);
            printf("Your current age is %d years %d months %d days", years, months, days);
        }

        else if (d1 == d2 && m1 == m2)
        {
            days = 0;
            months = 0;
            years = y2 - y1;
            printf("Your current age is %d years %d months %d days", years, months, days);
        }
        else if (d1 == d2)
        {
            if (m2 > m1)
            {
                days = 0;
                months = m2 - m1;
                years = y2 - y1;
                printf("Your current age is %d years %d months %d days", years, months, days);
            }
            else if (m2 < m1)
            {
                days = 0;
                months = m2 + 12 - m1;
                years = y2 - 1 - y1;
                printf("Your current age is %d years %d months %d days", years, months, days);
            }
        }
        if (m1 == m2)
        {
            if (d2 > d1)
            {
                days = d2 - d1;
                months = 0;
                years = y2 - y1;
                printf("your current age is %d years %d months %d days", years, months, days);
            }
            if (d2 < d1)
            {
                days = d2 + 30 - d1;
                months = m2 - 1 + 12 - m1;
                years = y2 - 1 - y1;
                printf("Your current age is %d years %d months %d days", years, months, days);
            }
        }
    }

    else if (y2 == y1)
    {
        if (d2 > d1 && m2 > m1)
        {
            days = d2 - d1;
            months = m2 - m1;
            years = y2 - y1;
            printf("Your current age is %d years %d months %d days", years, months, days);
        }
        if (d2 < d1 && m2 > m1)
        {
            days = (d2 + 30) - d1;
            months = (m2 - 1) - m1;
            years = y2 - y1;
            printf("Your current age is %d years %d months %d days", years, months, days);
        }
        if (d1 == d2 && m1 == m2)
        {
            printf("you are just a newborn");
        }
        if (d1 == d2)
        {
            if (m2 > m1)

            {
                days = 0;
                months = m2 - m1;
                years = 0;
                printf("Your current age is %d years %d months %d days", years, months, days);
            }
            if (m2 < m1)
            {
                printf("entered dats is invalid");
            }
        }

        if (m2 == m1)
        {
            if (d2 > d1)
            {
                days = d2 - d1;
                months = 0;
                years = 0;
                printf("Your current age is %d years %d months %d days", years, months, days);
            }
            if (d2 < d1)
            {
                printf("entered data is invalid");
            }
        }

        else
        {
            printf("entered data is invalid");
        }
    }
    else
    {
        printf("entered data is invalid");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int month_no;

    printf("enter month no");
    scanf("%d", &month_no);
    if (month_no == 2)
    { 
        char type_of_year;
        printf("leap(l) or non leap(n)");
        scanf(" %c", &type_of_year);
        if (type_of_year == 'l')
        {
            printf("29");
        }
        if (type_of_year == 'n')
        {
            printf("28");
        }
    }
    if (month_no == 1 || month_no == 3 || month_no == 5 || month_no == 7 || month_no == 8 || month_no == 10 || month_no == 12)
    {
        printf("31");
    }
    if (month_no == 4 || month_no == 6 || month_no == 9 || month_no == 11)
    {
        printf("30");
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int unit, EB;
    printf("enter the no of units consumed");
    scanf("%d", &unit);

    if (unit < 101)
    {
        EB = unit * 3;
        printf("The total electricity bill is %d\n", EB);
    }
    if (unit < 301 && unit > 100)
    {
        EB = 300 + ((unit - 100) * 5) + 180;
        printf("The total electricity bill is %d\n", EB);
    }
    if (unit < 501 && unit > 300)
    {
        EB = 300 + 1000 + ((unit - 300) * 7) + 200;
        printf("The total electricity bill is %d\n", EB);
    }
    if (unit > 500)
    {
        EB = 300 + 1000 + 1400 + ((unit - 500) * 10) + 300;
        printf("The total electricity bill is %d\n", EB);
    }

    return 0;
}
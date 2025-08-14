#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Largest of the three no is %d", a);
        }
    }
    if (b > a)
    {
        if (b > c)
        {
            printf("Largest of the two %d", b);
        }
    }
    if (c > b)
    {
        if (c > a)
        {
            printf("Largest of the two %d", c);
        }
    }

    return 0;
}
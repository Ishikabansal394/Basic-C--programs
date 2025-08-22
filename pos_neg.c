#include <stdio.h>
int main()
{
    int num;
    printf("enter any number");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Entered no is positive");
    }
    else if (num == 0)
    {
        printf("Entered no is zero");
    }
    else 
    {
        printf("Entered no is negative");
    }
    return 0;
}
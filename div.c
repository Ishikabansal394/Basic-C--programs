#include <stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0)
    {
        printf("number is divisible by 11 & 5");
    }
    else
    {
        printf("number is indivisible by 11 & 5");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("entered number is even");
    }
    if (num % 2 != 0)
    {
        printf("entered number is odd");
    }
    return 0;
}
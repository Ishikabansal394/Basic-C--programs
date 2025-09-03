#include <stdio.h>
int main()
{
    int n, d, sum = 0;
    printf("enter the number");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        sum = sum * 10 + d;
        n = n / 10;
    }
    printf("the reverse no is %d", sum);
    return 0;
}
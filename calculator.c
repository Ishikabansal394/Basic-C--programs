#include <stdio.h>
int main()
{
    int a, b, sum, diff, prod, quo;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quo = a / b;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quo);
    return 0;
}
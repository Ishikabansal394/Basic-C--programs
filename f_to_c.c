#include <stdio.h>
int main()
{
    float f, c;
    printf("enter the temperature in fahrenheit");
    scanf("%f", &f);
    c = (f - 32) / 1.8;
    printf("Temperature in fahrenhiet is %f", c);
    return 0;
}
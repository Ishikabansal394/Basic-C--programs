#include <stdio.h>
int main()
{
    float f, c;
    printf("enter the temperature in celcius");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in fahrenhiet is %f", f);
    return 0;
}
#include <math.h>
int main()
{
    int n, sum, temp, d, m;
    sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    temp = n;
    m = (n == 0) ? 1 : 1 + (int)log10(n);

    while (n > 0)
    {
        d = n % 10;
        sum = sum + (int)pow(d, m);
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("its an armstrong no");
    }
    if (sum != temp)
    {
        printf("no");
    }
    return 0;
}
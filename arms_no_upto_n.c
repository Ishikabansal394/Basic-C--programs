#include <stdio.h>
#include <math.h>
int main()
{
    int n, d, sum, m, temp, p;
    ;
    printf("enter the upper limit(+only) :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;
        p = i;
        m = (i == 0) ? 1 : (1 + (int)log10(i));
        while (p > 0)
        {
            d = p % 10;
            sum = sum + pow(d, m);
            p = p / 10;
        }

        if (sum == temp)
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}

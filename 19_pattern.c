#include <stdio.h>
int main()
{
    int p, n, m, t;
    printf("enter number of rows (odd)");
    scanf("%d", &p);
    n = (p + 1) / 2;
    m = p - n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n - 1; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int l = 1; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    for (int d = 1; d <= m; d++)
    {
        for (int c = 1; c <= d; c++)
        {
            printf(" ");
        }

        for (int a = 1; a <= n - d; a++)
        {
            printf("%d", a);
        }
        for (int e = 1; e <= n - d; e++)
        {
            printf("%d", e);
        }
        printf("\n");
    }
    return 0;
}
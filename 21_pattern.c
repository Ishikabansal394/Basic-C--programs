#include <stdio.h>
int main()
{
    int n, a;
    printf("enter number of rows");
    scanf("%d", &n);
    a = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (int j = n; j >= i; j--)
        {
            printf("%d", a);
        }
        a--;
        printf("\n");
    }
    return 0;
}
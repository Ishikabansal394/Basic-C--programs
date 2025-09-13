#include <stdio.h>
int main()
{
    int n;
    printf("enter number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf("1 ");
            }
            else
                printf("%d ", i - 1);
        }
        printf("\n");
    }
}

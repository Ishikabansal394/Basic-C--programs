#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows required : ");
    scanf("%d", &n);
    for (int i = 1; i <= (n + 1) / 2; i++)
    {

        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        for (int j = (n + 1) / 2; j >= i; j--)
        {
            if (j == (n + 1) / 2 || j == i || i == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int a = 1; a <= (n - ((n + 1) / 2)); a++)
    {
        for (int l = 1; l <= (n - ((n + 1) / 2)) - a; l++)
        {
            printf(" ");
        }

        for (int m = 1; m <= a + 1; m++)
        {
            if (m == 1 || m == a + 1 || a == (n - ((n + 1) / 2)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
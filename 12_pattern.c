#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (int j = n; j >= 1; j--)
        {
            if (i == 1 || j == n || j == i) // i==n is removed bcoz its is printing extra * in remaining spaces
                                            //  but in previous one there our no spaces at last to print extra *
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
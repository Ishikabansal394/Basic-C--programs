#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows");
    scanf("%d", &n);
    if (n % 2 != 0)
    {

        for (int i = 1; i <= n; i++)

        {

            for (int j = 1; j <= n; j++)
            {
                int d = (n / 2) + 1;
                if (i == d || j == d)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }
    else
    {
        printf("enter an odd number for perfect answer");
    }
    return 0;
}
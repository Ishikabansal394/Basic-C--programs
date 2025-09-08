#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows required : ");
    scanf("%d", &n);
    for (int i = 1; i <= (n + 1) / 2; i++)
    {

        for (int k = 1; k <= ((n + 1) / 2) - i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int a = 1; a <= (n - ((n + 1) / 2)); a++)
    {
        for (int l = 1; l <= a; l++)
        {
            printf(" ");
        }

        for (int m = (n - ((n + 1) / 2)); m >= a; m--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
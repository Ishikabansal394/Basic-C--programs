#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows");
    scanf("%d", &n);
    if (n <= 26)
    {
        for (int i = 1; i <= n; i++)

        {
            int a = 1;
            for (int j = 1; j <= n; j++)
            {
                char ch = (char)a + 96;
                printf("%c\t", ch);
                a++;
            }

            printf("\n");
        }
    }
    else
    {
        printf("entered data is invalid");
    }
    return 0;
}
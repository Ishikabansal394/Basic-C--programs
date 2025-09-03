/*
1
AB
123
ABCD....
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)

    {

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d", j);
            }
            else
            {
                char ch = (char)(j + 64);

                printf("%c", ch);
            }
        }

        printf("\n");
    }

    return 0;
}
/*
1
AB
234
CDEF.......
*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter no of rows");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    for (int i = 1; i <= n; i++)

    {

        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 00)
            {
                printf("%d", a);
                a++;
            }
            else
            {
                char ch = (char)(b + 64);

                printf("%c", ch);
                b++;
            }
        }

        printf("\n");
    }

    return 0;
}
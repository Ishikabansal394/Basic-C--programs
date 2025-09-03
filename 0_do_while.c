#include <stdio.h>
int main()
{
    int i, n;
    printf("enter number");
    scanf("%d", &n);
    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
    return 0;
}
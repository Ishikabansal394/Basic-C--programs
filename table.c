#include <stdio.h>
int main()
{
    int n, i, d;
    printf("enter the number");
    scanf("%d", &n);
    i = 0;
    while (i <= 10)
    {
        d = i * n;
        printf("%d\n", d);
        i++;
    }
    return 0;
}
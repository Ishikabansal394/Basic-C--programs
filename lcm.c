#include <stdio.h>
int main()
{
    int i, m, n;
    printf("enther two numbers");
    scanf("%d %d", &m, &n);
    i = (n < m) ? n : m;
    while (1)
    {
        if (i % n == 0 && i % m == 0)
        {
            printf("lcm is %d", i);
            break;
        }
        i++;
    }
    return 0;
}
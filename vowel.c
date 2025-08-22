#include <stdio.h>
int main()
{
    char alph;
    printf("enter any alphabet");
    scanf("%c", &alph);
    if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u')
    {
        printf("entered character is vowel");
    }
    else
    {
        printf("entered character is consonent");
    }
    return 0;
}
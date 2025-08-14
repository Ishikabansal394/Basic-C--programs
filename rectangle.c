#include <stdio.h>
int main()
{
    int l, b, area, perimeter;
    printf("Enter length of rectangle");
    scanf("%d", &l);
    printf("Enter breadth of rectangle");
    scanf("%d", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area of rectangle is %d\n", area);
    printf("Perimeter of rectangle is %d\n", perimeter);
    return 0;
}
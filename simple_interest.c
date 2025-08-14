#include <stdio.h>
int main()
{
    int PRINCIPLE, RATE, TIME, SI;
    printf("Enter principle rate and interest");
    scanf("%d%d%d", &PRINCIPLE, &RATE, &TIME);
    SI = ((PRINCIPLE * RATE * TIME) / 100);
    printf("Simple Interest is %d", SI);
    return 0;
}

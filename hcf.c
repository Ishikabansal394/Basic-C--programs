#include <stdio.h>
int main()
{
   int i, m, n, hcf;
   printf("enter two numbers");
   scanf("%d %d", &n, &m);
   i = (n < m) ? n : m;
   while (1 < 100)
   {
      if (i % m == 0 && i % n == 0)
      {
         printf("the lcm is %d \n", i);
         break;
      }
      i++;
   }
   hcf = n * m / i;
   printf("hcf is %d", hcf);
   return 0;
}
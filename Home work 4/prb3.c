#include <math.h>
#include <stdio.h>
double Series(int n)
{
   int i;
   double sums = 0.0, ser;
   for (i = 1; i <= n; ++i) {
       ser = 1 / pow(i, i);
       sums += ser;
   }
   return sums;
}
int main()
{
int n;
printf("ENTER THE VALUE OF n");
scanf("%d",&n);
   double res = Series(n);
   printf("SUM OF THE SERIES IS: %.3f", res);
   return 0;
}

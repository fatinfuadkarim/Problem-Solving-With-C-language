#include <stdio.h>
int main()
{
int number, digit;
int iter;
printf("Enter a number: ");
scanf("%d", &number);
iter = 0;
while (number > 0)
{
iter++;
printf("Iteration number %d, ", iter);
digit = number % 10;
printf("digit = %d\n", digit);
number = number / 10;
}
return 0;
}

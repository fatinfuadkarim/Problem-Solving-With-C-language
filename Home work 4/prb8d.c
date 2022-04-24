#include<stdio.h>
#include<conio.h>
int main()
{
printf("Enter size of Diamond: ");
int n, i, j, m = 1, p;
scanf("%d",&n);
for(i = 0; i <= n; i++)
{
for(j = n; j > i; j--)
{
printf(" ");
}
printf("*");
if (i > 0)
{
for(p = 1; p <= m; p++)
{
printf(" ");
}
m += 2;
printf("*");
}
printf("\n");
}
m -= 4;
for(i = 0; i <= n-1; i++)
{
for(j = 0; j <= i; j++)
{
printf(" ");
}
printf("*");
for(p = 1; p <= m; p++)
{
printf(" ");
}
m -= 2;
if(i != n-1)
{
printf ("*");
}

printf("\n");
}
return 0;
}

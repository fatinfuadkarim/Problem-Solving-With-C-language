#include<stdio.h>
int main()
{
   int i,j,n;
   printf("Enter number of lines: ");
   scanf("%d",&n);
   if(n%2!=0)
   {
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=i;j++)
           {
               printf("* ");
           }
           printf("\n");
       }
       for(i=n-1;i>=1;i--)
       {
           for(j=1;j<=i;j++)
           {
               printf("* ");
           }
           printf("\n");
       }
   }
   else
       printf("Enter a odd number");
   return 0;
}

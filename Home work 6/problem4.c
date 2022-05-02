#include <stdio.h>

int main()
{
int arr1[5][5],i,j,temp;
printf("Enter any 5x5 matrix:");
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
scanf("%d",&arr1[i][j]);
}
printf("\n");
}

printf("original matrix:\n");
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
printf("%d ",arr1[i][j]);
}
printf("\n");
}
int k=4,m=0;
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
if (i==j)
{
temp=arr1[i][j];
arr1[i][j]=arr1[k][m];
arr1[k][m]=temp;
m++;
}
}
}

printf("\n\nAfter swapping:\n");
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
printf("%d ",arr1[i][j]);
}
printf("\n");
}
return 0;
}

#include <stdio.h>

int main()
{
float arr1[]={20.2,11.05,78.1,34.9,51.11,4.0,101.8,29.03,90.42,67.6};
int length=sizeof(arr1)/sizeof(arr1[0]);
float sum=0;
for(int i=0;i<length;i++)
{
sum+=arr1[i];
}
float average=sum/length;
printf("Average: %f",average);
printf("\nNumbers less than calculated average:\n");
for(int i=0;i<length;i++)
{
if(average>arr1[i])
{
printf("%.2f ",arr1[i]);
}
}
return 0;
}


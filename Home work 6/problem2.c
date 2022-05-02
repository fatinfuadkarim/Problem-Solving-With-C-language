#include <stdio.h>

int main()
{
int arr1[]={20,11,78,34,51,4,101,29,90,67};
int length=sizeof(arr1)/sizeof(arr1[0]);
int min=arr1[0];
int index=0;
for(int i=0;i<length;i++)
{
if(min>arr1[i])
{
min=arr1[i];
index=i;
}
}
printf("Smallest element of the array: %d\n",min);
int temp=arr1[0];
arr1[0]=arr1[index];
arr1[index]=temp;
printf("After swapping\n");
for(int i=0;i<length;i++)
{
printf("%d ",arr1[i]);
}

return 0;
}

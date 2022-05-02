#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Structure declaration
struct Product
{
int ID;
char name[20];
int quantity;
float price;
};
int main()
{
FILE *fp;
int count=0,i=0;
float sum=0,avg=0;
struct Product record;
fp = fopen("in.txt", "r");
if(fp == NULL)
{
printf("Failed to open file for reading.\n");
exit(0);
}
fscanf(fp,"%d",&count);
while(fscanf(fp, "%d %s %d %f",&record.ID,record.name,&record.quantity,&record.price)!=EOF)
{
sum=sum+record.price;
}

printf("Total Price = %d\n",(int)sum);

fclose(fp);
}

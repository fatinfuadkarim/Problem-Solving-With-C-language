#include<stdio.h>
#include<conio.h>
int main()
{
float noOfCall, tempNoOfCall, charge;
printf("Enter the number of minutes talked in phone: ");
scanf("%f", &noOfCall);
printf("\n");
float bill=0;
if(noOfCall>=95)
{
charge = (5 * 0.3)+(30 * 0.5)+(60 * 0.75 )+((noOfCall-5-30-60) * 1) ;
noOfCall=0;
}

else if(noOfCall>=35)
{
charge = (5 * 0.3)+(30 * 0.5)+((noOfCall-5-30) * 0.75) ;
noOfCall=0;
}

else if(noOfCall>=5)
{
charge = (5 * 0.3)+((noOfCall-5)*0.5);
noOfCall=0;
}

else if(noOfCall>=0)
{
charge = (noOfCall * 0.3);

noOfCall=0;
}
charge = 1.15*charge;
printf("The charge you have to paid = %f taka", charge);

getch();
return 0;
}

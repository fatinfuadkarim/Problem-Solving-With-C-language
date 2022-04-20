#include<stdio.h>
int main()
{
   char n;    //declare a variable
   printf("Enter  your input : ");
   scanf("%c",&n);
   if(n>='0' && n<='9')   //check for digit
   {
       printf("Digit.");
   }
else   if(n>='A' && n<='Z')    //check for uppercase
   {
       printf("Uppercase alphabet .");
   }
   else if(n>='a' && n<='z')    //check for lowercase
   {
       printf("Lowercase alphabet.");
   }
   return 0;
}

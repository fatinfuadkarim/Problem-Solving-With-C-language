#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
float  height, weight, bmi;

    printf("Enter height in meter\n");
    scanf("%f", &height);

    printf("Enter weight in kg\n");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("Your Body Mass Index(BMI) is %f\n", bmi);


    if(bmi<16){
    printf("Dangerously underweight");
      return 0;
   }

     else if (bmi<19){
     printf("Underweight");
     return 0;
  }

    else if (bmi<24){
    printf("Normal weight");
    return 0;
 }


    else if (bmi<29){
    printf("over weight");
    return 0;
  }

   printf("seriously overweight");
  }

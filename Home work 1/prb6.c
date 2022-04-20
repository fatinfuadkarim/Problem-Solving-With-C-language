#include<stdio.h>
#define PI 3.141
int main(){
    float radius, area, diameter, circumference;
    printf("Enter radius of circle : ");
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("Area of circle : %0.3f\n", area);
    diameter = 2 * radius;
    printf("\n Diameter Of a Circle = %.2f\n", diameter);
    circumference = 2 * PI * radius;
    printf("\n Circumference Of a Circle = %.2f\n", circumference);

}

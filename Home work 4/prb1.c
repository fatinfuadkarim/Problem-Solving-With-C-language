#include<stdio.h>
void main()
{
int a = 6, b = 30;
int iter = 0;
for (; a <= 35; a+=2) {
iter++;
if(a%3==0) {
b -= 3;
printf("Executing continue statement. ");
printf("iter = %d, a=%d,b=%d\n", iter, a, b);
continue;
}
printf("iter = %d, a=%d,b=%d\n", iter, a, b);
if(a>b) break;
}
printf("a=%d,b=%d\n", a, b);
}

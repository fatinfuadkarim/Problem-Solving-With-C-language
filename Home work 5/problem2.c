#include <stdio.h>

int factorial(int x) {
  if(x==0)
   return 1;
 return x*factorial(x-1);
}

int main( void )
{
	int  x, n;
    scanf("%d%d", &x,&n);
    
    double total =1;
   for(int i=1;i<=n;i++) {
     
     double res = (double)x/(double)factorial(i);
     
      if(i&1)
       res=-res;
       
    total+=res;
    x*=x;
    
   }
   
   printf("answer is : %f", total);
    
	return 0;
}





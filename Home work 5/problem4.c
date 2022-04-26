
#include <stdio.h>

int power_of_x(int a , int x){
   if(x==0)
     return 1;
     
   return a*(power_of_x(a , x-1));
}
 
int main( void )
{
        int a,x;
        
    scanf("%d %d", &a,&x);
    
  printf("answer is : %d" , power_of_x(a,x));
            
    
	return 0;
}






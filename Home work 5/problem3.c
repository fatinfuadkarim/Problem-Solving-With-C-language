#include <stdio.h>

const char* prime(int n){
 
 for(int i=2;i<=n/2;i++)
    if(n%i==0)
      return "Not Prime";

  return "Prime";
}
 
int main( void )
{
        int n;
    scanf("%d",&n);
   n<=0 ? printf("Wrong input") : printf("%s",prime(n)) ;
            
    
	return 0;
}





